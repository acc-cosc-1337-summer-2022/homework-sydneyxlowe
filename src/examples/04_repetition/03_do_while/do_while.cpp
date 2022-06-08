#include "do_while.h"
using std::cout;
using std::cin;
//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto choice = 'n';

    do
    {
        cout<<"do you want to continue? ";
        cin>>choice;

    }
    while(choice == 'y' || choice == 'Y');
}

void display_menu()
{
    cout<<"1-Accounts rec\n";
    cout<<"2-accounts pay\n";
    cout<<"3-payroll\n";
    cout<<"4-exit\n";
}
void run_menu()
{
    auto choice = 0;

    do
    {
        display_menu();
        cout<<"enter menu choice ";
        cin>>choice;
    }
    while(choice != 4);
}


