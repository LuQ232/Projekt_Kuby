#ifndef TIME_H
#define TIME_H

#include<iostream>


class Time
{

    std::string process;
	int hours;
	int minutes;
	int seconds;


public:
	Time();

	void print_state();

};

#endif //TIME_H
