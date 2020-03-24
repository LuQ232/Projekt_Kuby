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
    Time(std::string process_name,int h, int m,int s);
    ~Time();

    Time operator+  (const Time timer);
    Time operator+= (const Time timer);
    Time operator+  (const int seconds_to_add);
    Time operator+= (const int seconds_to_add);
    bool operator>  (const Time timer);
    bool operator<  (const Time timer);
    bool operator== (const Time timer);
    bool operator<= (const Time timer);
    bool operator>= (const Time timer);
    friend std::ostream & operator<< (std::ostream &output,const Time &t);

    std::string get_process_name(){return this->process;};
    void print_state();

};

inline std::ostream & operator<< (std::ostream &output,const Time &t)
{return output << "Process name: " <<t.process<<" Hours: " <<t.hours<<" Minutes: " <<t.minutes<<" Seconds: " <<t.seconds;}

#endif //TIME_H
