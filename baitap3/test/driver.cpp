#define MAX_SIM 30

void set_random(Vtop *dut, vluint64_t sim_unit) {
    dut->start_i = rand()%2;
    dut->n_i = 3;
    dut->data_i = rand()%256;
    dut-> rst_ni = 1;
    //dut-> hex_i = 60154;
}
