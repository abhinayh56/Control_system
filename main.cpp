#include <iostream>
#include "./src/Control_system.h"

int main()
{
    std::cout << "aaaaa\n";

    P_controller<double> obj_P_controller;
    I_controller<double> obj_I_controller;
    D_controller<double> obj_D_controller;
    D_LPF_1_controller<double> obj_D_LPF_1_controller;
    PI_controller<double> obj_PI_controller;
    PD_controller<double> obj_PD_controller;
    PD_LPF_1_controller<double> obj_PD_LPF_1_controller;
    PID_controller<double> obj_PID_controller;
    PID_LPF_1_controller<double> obj_PID_LPF_1_controller;
    PID_LPF_1_FF_controller<double> obj_PID_LPF_1_FF_controller;
    PID_S_controller<double> obj_PID_S_controller;
    PID_P_controller<double> obj_PID_P_controller;
    PID_GS_controller<double> obj_PID_GS_controller;

    return 0;
}