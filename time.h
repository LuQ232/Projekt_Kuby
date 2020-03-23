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

    Time operator+  (const Time timer);
    Time operator+= (const Time timer);
    Time operator+  (const int seconds_to_add);
    Time operator+= (const int seconds_to_add);
    bool operator>  (const Time timer);
    bool operator<  (const Time timer);
    bool operator== (const Time timer);
    bool operator<= (const Time timer);
    bool operator>= (const Time timer);

	void print_state();

};

#endif //TIME_H
