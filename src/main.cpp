#include <iostream>

#include "../inc/time.h"
#include "../inc/lathe.h"


int main()
{
    Lathe cnc;
    cnc.add_new_process();
    cnc.add_new_process();
    cnc.add_new_process();
    Lathe copy_of_cnc;

    //Lathe copy_of_cnc(cnc,1);

    Time timer("eee",10,10,10);
    copy_of_cnc.return_copy_of_lathe_in_time(cnc,timer);
    std::string menu = "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n1.Menu\n2.Add Process\n3.Show all processes names \n4.Show data about chosen process \n5.Show all processes data\n6.Show sum of all processes\n7.Exit\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
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
                return 0;
        break;
        default:
            std::cout<<"INVALID CHOICE"<<std::endl;
        break;
      }
   }

    return 0;
}
