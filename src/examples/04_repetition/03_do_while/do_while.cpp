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



