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
	std::cout<<std::endl;
}



void Time::print_state()
{
    std::cout<<"Process: "<<process<<"    Hours: "<<hours<<" Minutes: "<<minutes<<" Seconds: "<<seconds<<std::endl;
}

