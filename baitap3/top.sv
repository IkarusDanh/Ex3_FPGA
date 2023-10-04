/* verilator lint_off UNUSED */
module top (
    //inputs
    // change clk_i to CLOCK_50
    input logic CLOCK_50,
    //input logic SW[18],
    input logic [17:0] SW,
    //input logic [7:0] data_i, n_i,
    //outputs
    output logic [17:0] LEDR,
    //ouputs for LCD
    output logic LCD_EN  , LCD_RS , LCD_ON , LCD_RW ,
	output logic [7:0] LCD_DATA
);
logic [15:0] sum_wire;
logic [4:0][7:0] lcd_dec;

assign LEDR[15:0] = SW[15:0] ; 
assign LEDR[16] = !SW[16] ;

sum_ver2 sum_module (
    .rst_ni(SW[16]),
    .start_i(SW[17]),
    .data_i(SW[7:0]),
    .n_i(SW[15:8]),
    .done_o(LEDR[17]),
    .sum_o(sum_wire)
); 
hex_to_dec hex2dec_module (
    .hex_i(sum_wire),
    .dec(lcd_dec)
);
lcd_display lcd_module (
    .decim_i(lcd_dec),
    //change clk_i to CLOCK_50
    .clk_i(CLOCK_50) ,
	.lcd_e (LCD_EN) ,
	.lcd_rs (LCD_RS) ,
	.data(LCD_DATA)
);
	assign LCD_ON = 1'b1;
	assign LCD_RW = 1'b0;
endmodule
/* verilator lint_off UNUSED */
