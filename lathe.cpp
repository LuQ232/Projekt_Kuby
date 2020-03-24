#include "lathe.h"

void Lathe:: add_new_process()
{
lathe_processes.push_back(new Time());
}

void Lathe::print_all_processes_name()
{
    std::cout<<"All names of processes: "<<std::endl;
    for(unsigned int i=0; i<lathe_processes.size();i++)
    {
       std::cout<<"Nr."<<i<<"    "<<lathe_processes[i]->get_process_name()<<std::endl;
    }
}

void Lathe::print_all_processes_data()
{
    for(auto i=lathe_processes.begin();i!=lathe_processes.end();i++)
    {
        std::cout<<**i<<std::endl;
    }
}

void Lathe::print_sum_of_all_processes()
{
    Time sum("Sum of all processes",0,0,0);
    for(auto i=lathe_processes.begin();i!=lathe_processes.end();i++)
    {
        sum+=**i;
    }
    std::cout<<sum<<std::endl;
}

void Lathe::print_process_data(unsigned int index)
{
    if (index<0)
    {
        std::cout<<"INDEX CANT BE LOWER THAN 0"<<std::endl;
        return;
    }

        if (index>lathe_processes.size()-1)
    {
        std::cout<<"INDEX IS TOO HIGH"<<std::endl;
        return;
    }

    for(unsigned int i=0; i<lathe_processes.size();i++)
    {
        if(i==index)
            lathe_processes[i]->print_state();
    }
}

