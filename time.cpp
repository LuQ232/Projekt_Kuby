#include "time.h"

Time::Time()
{
std::cout<<"Process name: ";
std::cin>>process;

std::cout<<"Hours: ";
	std::cin>>hours;
	while (std::cin.fail()||(hours<0))
	{
		std::cout << "This value is incorrect. Try again: " << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cin>>hours;
	}
	std::cout<<"Minutes: ";
	std::cin>>minutes;
	while (std::cin.fail()||(minutes<0))
	{
		std::cout << "This value is incorrect. Try again: " << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cin>>minutes;
	}
	std::cout<<"Seconds: ";
	std::cin>>seconds;
	while (std::cin.fail()||(seconds<0))
	{
		std::cout << "This value is incorrect. Try again: " << std::endl;
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cin>>seconds;
	}
	if(seconds>=60)
    {
        int add_to_minutes = seconds /60;
        int rest_seconds = seconds % 60;
        minutes+=add_to_minutes;
        seconds = rest_seconds;
    }
    if(minutes>=60)
    {
        int add_to_hours = minutes /60;
        int rest_minutes = minutes % 60;
        hours+=add_to_hours;
        minutes = rest_minutes;
    }


	std::cout<<std::endl;
}

Time::Time(std::string process_name, int h, int m, int s)
{
process = process_name;
hours=h;
minutes=m;
seconds = s;


	if(seconds>=60)
    {
        int add_to_minutes = seconds /60;
        int rest_seconds = seconds % 60;
        minutes+=add_to_minutes;
        seconds = rest_seconds;
    }
    if(minutes>=60)
    {
        int add_to_hours = minutes /60;
        int rest_minutes = minutes % 60;
        hours+=add_to_hours;
        minutes = rest_minutes;
    }


	std::cout<<std::endl;
}

Time::~Time()
{
    //std::cout<<"Time destructor!"<<std::endl;
}
void Time::print_state()
{
    std::cout<<"Process: "<<process<<"    Hours: "<<hours<<" Minutes: "<<minutes<<" Seconds: "<<seconds<<std::endl;
}

Time Time::operator+ (const Time timer)
{
this->hours +=timer.hours;
this->minutes += timer.minutes;
this->seconds += timer.seconds;

if(this->seconds>=60)
    {
        int add_to_minutes = this->seconds /60;
        int rest_seconds = this->seconds % 60;
        this->minutes+=add_to_minutes;
        this->seconds = rest_seconds;
    }
    if(this->minutes>=60)
    {
        int add_to_hours = this->minutes /60;
        int rest_minutes = this->minutes % 60;
        this->hours+=add_to_hours;
        this->minutes = rest_minutes;
    }

return *this;
}

Time Time::operator+= (const Time timer)
{
this->hours +=timer.hours;
this->minutes += timer.minutes;
this->seconds += timer.seconds;

if(this->seconds>=60)
    {
        int add_to_minutes = this->seconds /60;
        int rest_seconds = this->seconds % 60;
        this->minutes+=add_to_minutes;
        this->seconds = rest_seconds;
    }
    if(this->minutes>=60)
    {
        int add_to_hours = this->minutes /60;
        int rest_minutes = this->minutes % 60;
        this->hours+=add_to_hours;
        this->minutes = rest_minutes;
    }

return *this;
}
Time Time::operator+  (const int seconds_to_add)
{
    this->seconds += seconds_to_add;

    if(this->seconds>=60)
        {
            int add_to_minutes = this->seconds /60;
            int rest_seconds = this->seconds % 60;
            this->minutes+=add_to_minutes;
            this->seconds = rest_seconds;
        }
        if(this->minutes>=60)
        {
            int add_to_hours = this->minutes /60;
            int rest_minutes = this->minutes % 60;
            this->hours+=add_to_hours;
            this->minutes = rest_minutes;
        }

    return *this;
}
Time Time::operator+=  (const int seconds_to_add)
{
    this->seconds += seconds_to_add;

    if(this->seconds>=60)
        {
            int add_to_minutes = this->seconds /60;
            int rest_seconds = this->seconds % 60;
            this->minutes+=add_to_minutes;
            this->seconds = rest_seconds;
        }
        if(this->minutes>=60)
        {
            int add_to_hours = this->minutes /60;
            int rest_minutes = this->minutes % 60;
            this->hours+=add_to_hours;
            this->minutes = rest_minutes;
        }

    return *this;
}

bool Time::operator> (const Time timer)
{
    if(this->hours>timer.hours)
    {
        return true;
    }else if(this->hours==timer.hours)
    {
        if(this->minutes>timer.minutes)
        {
            return true;
        }else if(this->minutes==timer.minutes)
        {
            if(this->seconds>timer.seconds)
            {
                return true;
            }else if(this->seconds==timer.seconds)
            {
                return false;
            }
        }
    }
 return false;
}

bool Time::operator< (const Time timer)
{
    if(this->hours<timer.hours)
    {
        return true;
    }else if(this->hours==timer.hours)
    {
        if(this->minutes<timer.minutes)
        {
            return true;
        }else if(this->minutes==timer.minutes)
        {
            if(this->seconds<timer.seconds)
            {
                return true;
            }else if(this->seconds==timer.seconds)
            {
                return false;
            }
        }
    }
 return false;
}

bool Time::operator== (const Time timer)
{
    if(this->hours==timer.hours)
        return true;
    else
        return false;
}
bool Time::operator<= (const Time timer)
{
    if(*this < timer || *this == timer)
        return true;
    else
        return false;
}

bool Time::operator>= (const Time timer)
{
    if(*this > timer || *this == timer)
        return true;
    else
        return false;
}


