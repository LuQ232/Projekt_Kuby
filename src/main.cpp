#include <iostream>

#include "../inc/time.h"
#include "../inc/lathe.h"


int main()
{
    Lathe cnc;
    Lathe copy_of_cnc_2;


    std::string menu = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n1.Menu\n2.Add Process\n3.Show all processes names \n4.Show data about chosen process \n5.Show all processes data\n6.Show sum of all processes\n7.Make copy object by N elements and show copied processes\n8.Make copy object by Time and show copied processes\n9.Exit\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    std::cout<<menu;
    int choice;
   while (true)
   {
    std::cout<<"Your choice: ";
    std::cin>>choice;
      switch ( choice )
      {
        case 1:
             std::cout<<menu;
        break;

        case 2:
             cnc.add_new_process();
        break;

        case 3:
            cnc.print_all_processes_name();
        break;

        case 4:
            unsigned int index;
            std::cout<<"Index: ";
            std::cin>>index;
            cnc.print_process_data(index);
        break;

        case 5:
            cnc.print_all_processes_data();
        break;

        case 6:
            cnc.print_sum_of_all_processes();
        break;

        case 7:
            {
            std::cout<<"How many elements copy from original: ";
            int number;
            std::cin>>number;
            std::cout<<std::endl;
            Lathe copy_of_cnc_1(cnc,number);
            std::cout<<"Processes in copied lathe:"<<std::endl;
            copy_of_cnc_1.print_all_processes_data();
            }
        break;

        case 8:
            {
            std::cout<<"Give time to make copy of processes: :";
            std::cout<<std::endl;
            Time copy_time("1");
            copy_of_cnc_2.return_copy_of_lathe_in_time(cnc,copy_time);
            std::cout<<"Processes in copied lathe:"<<std::endl;
            copy_of_cnc_2.print_all_processes_data();
            copy_of_cnc_2.pop_all_processes();
            }
        break;

        case 9:
            return 0;
        break;

        default:
            std::cout<<"INVALID CHOICE"<<std::endl;
        break;
      }
   }

    return 0;
}
