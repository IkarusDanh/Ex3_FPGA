// Bo clk_i, dung Start_i lam tin hieu cong, van de o get_n va phai co start_i moi cho ra ket qua
module sum_ver2 (
    //inputs
    //input logic clk_i,
    input logic rst_ni,
    input logic start_i,
    input logic [7:0] data_i, n_i,
    //outputs
    output logic done_o,
    output logic [15:0] sum_o
);
//Wire
logic [15:0] get_sum = 0;
logic [7:0] counter =   0;
logic [7:0] get_n   =   8'hFF;
//Algorithm
always_ff @(posedge start_i ) begin
    if (!rst_ni) begin
        get_sum <=  0;
        get_n   <=  n_i;
        counter <=  0;
        done_o  <=  0;
        sum_o <= 0;
    end
    else begin
        if ((counter < get_n) && !done_o) begin
            get_n <= n_i;
            get_sum <= get_sum + {8'h0, data_i};
            sum_o <= get_sum + {8'h0, data_i};
            counter <= counter + 1;
            if (counter == (get_n - 1)) done_o <= 1;
            else done_o <= 0;
        end
        else begin
            done_o <= 1;
            sum_o <= get_sum;
        end
    end
end
endmodule
