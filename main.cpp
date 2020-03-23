#include <iostream>

#include "time.h"



int main()
{
    std::cout<<std::endl<<"NOW YOU WILL SET 3 TIMERS FOR TESTS"<<std::endl;
    Time timer1;
    //Time timer2;
    //Time timer3;
    timer1.print_state();
/*
    std::cout<<std::endl<<"NOW PRINTING ALL TIMERS STATE"<<std::endl;
    timer1.print_state();
    timer2.print_state();
    timer3.print_state();


    std::cout<<std::endl<<"SUM OF this and 1st one"<<std::endl;
    Time sum_timer;
    sum_timer += timer1;

    sum_timer.print_state();
*/
    std::cout<<std::endl<<"HOW MANY SECONDS ADD:";
    int add;
    std::cin>>add;
    timer1+=add;
    timer1.print_state();

    return 0;
}
