#include <iostream>

#include "time.h"



int main()
{
    std::cout<<std::endl<<"NOW YOU WILL SET 3 TIMERS FOR TESTS"<<std::endl;
    Time timer1;
    Time timer2;
    Time timer3;


    std::cout<<std::endl<<"NOW PRINTING ALL TIMERS STATE"<<std::endl;
    timer1.print_state();
    timer2.print_state();
    timer3.print_state();
    return 0;
}
