`timescale 1ns / 1ps

/* verilator lint_off WIDTHEXPAND */
/* verilator lint_off WIDTHTRUNC */
/* verilator lint_off CASEINCOMPLETE */
module axi_ram #
(
    // Width of data bus in bits
    parameter DATA_WIDTH = 32,
    // Width of address bus in bits
    parameter ADDR_WIDTH = 16,
    // Width of wstrb (width of data bus in words)
    parameter STRB_WIDTH = (DATA_WIDTH/8),
    // Width of ID signal
    parameter ID_WIDTH = 8,
    // Extra pipeline register on output
    parameter PIPELINE_OUTPUT = 0
)
(
    input  wire                   clk,
    input  wire                   rst,

    input  wire [ID_WIDTH-1:0]    s_axi_awid,
    input  wire [ADDR_WIDTH-1:0]  s_axi_awaddr,
    input  wire [7:0]             s_axi_awlen,
    input  wire [2:0]             s_axi_awsize,
    input  wire [1:0]             s_axi_awburst,
    input  wire                   s_axi_awlock,
    input  wire [3:0]             s_axi_awcache,
    input  wire [2:0]             s_axi_awprot,
    input  wire                   s_axi_awvalid,
    output wire                   s_axi_awready,
    input  wire [DATA_WIDTH-1:0]  s_axi_wdata,
    input  wire [STRB_WIDTH-1:0]  s_axi_wstrb,
    input  wire                   s_axi_wlast,
    input  wire                   s_axi_wvalid,
    output wire                   s_axi_wready,
    output wire [ID_WIDTH-1:0]    s_axi_bid,
    output wire [1:0]             s_axi_bresp,
    output wire                   s_axi_bvalid,
    input  wire                   s_axi_bready,
    input  wire [ID_WIDTH-1:0]    s_axi_arid,
    input  wire [ADDR_WIDTH-1:0]  s_axi_araddr,
    input  wire [7:0]             s_axi_arlen,
    input  wire [2:0]             s_axi_arsize,
    input  wire [1:0]             s_axi_arburst,
    input  wire                   s_axi_arlock,
    input  wire [3:0]             s_axi_arcache,
    input  wire [2:0]             s_axi_arprot,
    input  wire                   s_axi_arvalid,
    output wire                   s_axi_arready,
    output wire [ID_WIDTH-1:0]    s_axi_rid,
    output wire [DATA_WIDTH-1:0]  s_axi_rdata,
    output wire [1:0]             s_axi_rresp,
    output wire                   s_axi_rlast,
    output wire                   s_axi_rvalid,
    input  wire                   s_axi_rready
);

parameter VALID_ADDR_WIDTH = ADDR_WIDTH - $clog2(STRB_WIDTH);
parameter WORD_WIDTH = STRB_WIDTH;
parameter WORD_SIZE = DATA_WIDTH/WORD_WIDTH;

// bus width assertions
initial begin
    if (WORD_SIZE * STRB_WIDTH != DATA_WIDTH) begin
        $error("Error: AXI data width not evenly divisble (instance %m)");
        $finish;
    end

    if (2**$clog2(WORD_WIDTH) != WORD_WIDTH) begin
        $error("Error: AXI word width must be even power of two (instance %m)");
        $finish;
    end
end

localparam [0:0]
    READ_STATE_IDLE = 1'd0,
    READ_STATE_RDATA = 1'd1;

reg [0:0] read_state_reg = READ_STATE_IDLE, read_state_next;

localparam [1:0]
    WRITE_STATE_IDLE = 2'd0,
    WRITE_STATE_WDATA = 2'd1;

reg [1:0] write_state_reg = WRITE_STATE_IDLE, write_state_next;

reg mem_wr_en;
reg mem_rd_en;

reg [ID_WIDTH-1:0] read_id_reg = {ID_WIDTH{1'b0}}, read_id_next;
reg [ADDR_WIDTH-1:0] read_addr_reg = {ADDR_WIDTH{1'b0}}, read_addr_next;
reg [7:0] read_count_reg = 8'd0, read_count_next;
reg [2:0] read_size_reg = 3'd0, read_size_next;
reg [1:0] read_burst_reg = 2'd0, read_burst_next;
reg [ID_WIDTH-1:0] write_id_reg = {ID_WIDTH{1'b0}}, write_id_next;
reg [ADDR_WIDTH-1:0] write_addr_reg = {ADDR_WIDTH{1'b0}}, write_addr_next;
reg [7:0] write_count_reg = 8'd0, write_count_next;
reg [2:0] write_size_reg = 3'd0, write_size_next;
reg [1:0] write_burst_reg = 2'd0, write_burst_next;

// Two-entry B response FIFO
reg [ID_WIDTH-1:0] b_id_fifo [0:1];

reg b_wr_ptr = 1'b0;
reg b_rd_ptr = 1'b0;
reg [1:0] b_count = 2'd0;

wire b_push;
wire b_pop;

reg b_queued_reg = 1'b0, b_queued_next;
reg [ID_WIDTH-1:0] b_hold_id_reg = 0, b_hold_id_next;



reg                  mem_valid [(2**VALID_ADDR_WIDTH)-1:0];   // <-- add if missing
reg [1:0] s_axi_rresp_reg      = 2'b00;
reg [1:0] s_axi_rresp_pipe_reg = 2'b00;

reg s_axi_awready_reg = 1'b0, s_axi_awready_next;
reg s_axi_wready_reg = 1'b0, s_axi_wready_next;
reg [ID_WIDTH-1:0] s_axi_bid_reg = {ID_WIDTH{1'b0}}, s_axi_bid_next;
reg s_axi_bvalid_reg = 1'b0, s_axi_bvalid_next;
reg s_axi_arready_reg = 1'b0, s_axi_arready_next;
reg [ID_WIDTH-1:0] s_axi_rid_reg = {ID_WIDTH{1'b0}}, s_axi_rid_next;
reg [DATA_WIDTH-1:0] s_axi_rdata_reg = {DATA_WIDTH{1'b0}}, s_axi_rdata_next;
reg s_axi_rlast_reg = 1'b0, s_axi_rlast_next;
reg s_axi_rvalid_reg = 1'b0, s_axi_rvalid_next;
reg [ID_WIDTH-1:0] s_axi_rid_pipe_reg = {ID_WIDTH{1'b0}};
reg [DATA_WIDTH-1:0] s_axi_rdata_pipe_reg = {DATA_WIDTH{1'b0}};
reg s_axi_rlast_pipe_reg = 1'b0;
reg s_axi_rvalid_pipe_reg = 1'b0;

// (* RAM_STYLE="BLOCK" *)
reg [DATA_WIDTH-1:0] mem[(2**VALID_ADDR_WIDTH)-1:0];
wire [VALID_ADDR_WIDTH-1:0] s_axi_awaddr_valid = s_axi_awaddr >> (ADDR_WIDTH - VALID_ADDR_WIDTH);
wire [VALID_ADDR_WIDTH-1:0] s_axi_araddr_valid = s_axi_araddr >> (ADDR_WIDTH - VALID_ADDR_WIDTH);
wire [VALID_ADDR_WIDTH-1:0] read_addr_valid = read_addr_reg >> (ADDR_WIDTH - VALID_ADDR_WIDTH);
wire [VALID_ADDR_WIDTH-1:0] write_addr_valid = write_addr_reg >> (ADDR_WIDTH - VALID_ADDR_WIDTH);

assign s_axi_awready = s_axi_awready_reg;
assign s_axi_wready = s_axi_wready_reg;
assign s_axi_bid = (b_count != 0) ? b_id_fifo[b_rd_ptr] : {ID_WIDTH{1'b0}};
assign s_axi_bvalid = (b_count != 0);
assign s_axi_bresp = 2'b00;
assign s_axi_arready = s_axi_arready_reg;
assign s_axi_rid = PIPELINE_OUTPUT ? s_axi_rid_pipe_reg : s_axi_rid_reg;
assign s_axi_rdata = PIPELINE_OUTPUT ? s_axi_rdata_pipe_reg : s_axi_rdata_reg;

assign s_axi_rresp = PIPELINE_OUTPUT ? s_axi_rresp_pipe_reg : s_axi_rresp_reg; //assign s_axi_rresp = 2'b00;

assign s_axi_rlast = PIPELINE_OUTPUT ? s_axi_rlast_pipe_reg : s_axi_rlast_reg;
assign s_axi_rvalid = PIPELINE_OUTPUT ? s_axi_rvalid_pipe_reg : s_axi_rvalid_reg;


assign b_pop = (b_count != 0) && s_axi_bready;

assign b_push =
    (write_state_reg == WRITE_STATE_WDATA) &&
    s_axi_wvalid &&
    s_axi_wready &&
    (write_count_reg == 0 || s_axi_wlast);


integer i, j;

initial begin
    // two nested loops for smaller number of iterations per loop
    // workaround for synthesizer complaints about large loop counts
    for (i = 0; i < 2**VALID_ADDR_WIDTH; i = i + 2**(VALID_ADDR_WIDTH/2)) begin
        for (j = i; j < i + 2**(VALID_ADDR_WIDTH/2); j = j + 1) begin
            mem[j] = 0;
            mem_valid[j] = 0;
        end
    end
end





always @* begin

    write_state_next = WRITE_STATE_IDLE;

    mem_wr_en = 1'b0;

    write_id_next = write_id_reg;
    write_addr_next = write_addr_reg;
    write_count_next = write_count_reg;
    write_size_next = write_size_reg;
    write_burst_next = write_burst_reg;

    s_axi_awready_next = 1'b0;
    s_axi_wready_next = 1'b0;

    case (write_state_reg)

        WRITE_STATE_IDLE: begin

            // Accept another address if response FIFO has room
            s_axi_awready_next = (b_count < 2) || b_pop;

            if (s_axi_awvalid && s_axi_awready) begin

                write_id_next = s_axi_awid;
                write_addr_next = s_axi_awaddr;
                write_count_next = s_axi_awlen;
                write_size_next = s_axi_awsize;
                write_burst_next = s_axi_awburst;

                s_axi_awready_next = 1'b0;

                write_state_next = WRITE_STATE_WDATA;

            end else begin

                write_state_next = WRITE_STATE_IDLE;

            end

        end

        WRITE_STATE_WDATA: begin

            s_axi_wready_next = 1'b1;

            if (s_axi_wvalid && s_axi_wready) begin

                mem_wr_en = 1'b1;

                if (write_count_reg == 0 || s_axi_wlast) begin

                    s_axi_wready_next = 1'b0;

                    // Completed transaction.
                    // B response is stored in FIFO.
                    write_state_next = WRITE_STATE_IDLE;

                end else begin

                    write_count_next = write_count_reg - 1'b1;

                    // INCR burst address update
                    if (write_burst_reg == 2'b01) begin
                        write_addr_next =
                            write_addr_reg + (1 << write_size_reg);
                    end

                    write_state_next = WRITE_STATE_WDATA;

                end

            end else begin

                write_state_next = WRITE_STATE_WDATA;

            end

        end

        default: begin
            write_state_next = WRITE_STATE_IDLE;
        end

    endcase

end


always @(posedge clk) begin

    write_state_reg <= write_state_next;

    write_id_reg <= write_id_next;
    write_addr_reg <= write_addr_next;
    write_count_reg <= write_count_next;
    write_size_reg <= write_size_next;
    write_burst_reg <= write_burst_next;

    s_axi_awready_reg <= s_axi_awready_next;
    s_axi_wready_reg <= s_axi_wready_next;

    // Memory writes with byte strobes
    for (i = 0; i < WORD_WIDTH; i = i + 1) begin

        if (mem_wr_en && s_axi_wstrb[i]) begin

            mem[write_addr_valid][WORD_SIZE*i +: WORD_SIZE]
                <= s_axi_wdata[WORD_SIZE*i +: WORD_SIZE];

        end

    end

    // Mark memory word as initialized
    if (mem_wr_en && (|s_axi_wstrb)) begin

        mem_valid[write_addr_valid] <= 1'b1;

    end

    // Push completed write response
    if (b_push) begin

        b_id_fifo[b_wr_ptr] <= write_id_reg;
        b_wr_ptr <= ~b_wr_ptr;

    end

    // Pop accepted write response
    if (b_pop) begin

        b_rd_ptr <= ~b_rd_ptr;

    end

    // FIFO occupancy update
    case ({b_push, b_pop})

        2'b10:
            b_count <= b_count + 1'b1;

        2'b01:
            b_count <= b_count - 1'b1;

        default:
            b_count <= b_count;

    endcase

    if (rst) begin

        write_state_reg <= WRITE_STATE_IDLE;

        s_axi_awready_reg <= 1'b0;
        s_axi_wready_reg <= 1'b0;

        b_wr_ptr <= 1'b0;
        b_rd_ptr <= 1'b0;
        b_count <= 2'd0;

    end

end

always @* begin
    read_state_next = READ_STATE_IDLE;

    mem_rd_en = 1'b0;

    s_axi_rid_next = s_axi_rid_reg;
    s_axi_rlast_next = s_axi_rlast_reg;
    s_axi_rvalid_next = s_axi_rvalid_reg && !(s_axi_rready || (PIPELINE_OUTPUT && !s_axi_rvalid_pipe_reg));

    read_id_next = read_id_reg;
    read_addr_next = read_addr_reg;
    read_count_next = read_count_reg;
    read_size_next = read_size_reg;
    read_burst_next = read_burst_reg;

    s_axi_arready_next = 1'b0;

    case (read_state_reg)

        READ_STATE_IDLE: begin
            //TODO: Finish the following code
            //similar manner as the write state machine
            s_axi_arready_next = 1'b1;

            if (s_axi_arvalid && s_axi_arready) begin
                read_id_next = s_axi_arid;
                read_addr_next = s_axi_araddr;
                read_count_next = s_axi_arlen;
                read_size_next = s_axi_arsize;
                read_burst_next = s_axi_arburst;

                read_state_next = READ_STATE_RDATA;
            end else read_state_next = READ_STATE_IDLE;
        end

        READ_STATE_RDATA: begin
            //TODO: Finish the following code
            //similar manner as the write state machine
            if (!s_axi_rvalid_reg || s_axi_rready || (PIPELINE_OUTPUT && !s_axi_rvalid_pipe_reg)) begin
                mem_rd_en = 1'b1;
                s_axi_rvalid_next = 1'b1;
                s_axi_rid_next = read_id_reg;

                if (read_count_reg == 0) begin
                    s_axi_rlast_next = 1'b1;
                    read_state_next = READ_STATE_IDLE;
                end else begin
                    s_axi_rlast_next = 1'b0;
                    read_count_next = read_count_reg - 1'b1;

                    if (read_burst_reg == 2'b01) read_addr_next = read_addr_reg + (1 << read_size_reg);

                    read_state_next = READ_STATE_RDATA;
                end

            end else read_state_next = READ_STATE_RDATA;
        end

        default: read_state_next = READ_STATE_IDLE;
        
    endcase
end

always @(posedge clk) begin
    read_state_reg <= read_state_next;

    read_id_reg <= read_id_next;
    read_addr_reg <= read_addr_next;
    read_count_reg <= read_count_next;
    read_size_reg <= read_size_next;
    read_burst_reg <= read_burst_next;

    s_axi_arready_reg <= s_axi_arready_next;
    s_axi_rid_reg <= s_axi_rid_next;
    s_axi_rlast_reg <= s_axi_rlast_next;
    s_axi_rvalid_reg <= s_axi_rvalid_next;

    if (mem_rd_en) begin
        s_axi_rdata_reg <= mem[read_addr_valid];
        
        s_axi_rresp_reg <= mem_valid[read_addr_valid] ? 2'b00 : 2'b10;

    end

    if (!s_axi_rvalid_pipe_reg || s_axi_rready) begin
        s_axi_rid_pipe_reg <= s_axi_rid_reg;
        s_axi_rdata_pipe_reg <= s_axi_rdata_reg;
        s_axi_rlast_pipe_reg <= s_axi_rlast_reg;
        s_axi_rvalid_pipe_reg <= s_axi_rvalid_reg;

        s_axi_rresp_pipe_reg  <= s_axi_rresp_reg;

    end

    if (rst) begin
        read_state_reg <= READ_STATE_IDLE;

        s_axi_arready_reg <= 1'b0;
        s_axi_rvalid_reg <= 1'b0;
        s_axi_rvalid_pipe_reg <= 1'b0;
    end
end

endmodule

