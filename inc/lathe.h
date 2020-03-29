#ifndef LATHE_H
#define LATHE_H

#include <iostream>
#include <vector>
#include <memory>

#include "time.h"


class Lathe
{
    std::vector<Time*> lathe_processes = {}; //It contains pointers for Time objects

public:

    Lathe (const Lathe &lathe); // copy constructor
    Lathe & operator = (const Lathe& assigment);// ASSIGNMENT OPERATOR!!
    Lathe ();
    Lathe (const Lathe lathe, unsigned int quantity); // etap 4 point 2

    void return_copy_of_lathe_in_time(const Lathe lathe,const Time time);

    void add_new_process();
    void print_all_processes_name();
    void print_all_processes_data();
    void print_process_data(unsigned int index);
    void print_sum_of_all_processes();



};

#endif //LATHE
