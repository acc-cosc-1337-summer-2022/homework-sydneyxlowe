//write include statements
#include "hwexpressions.h"


//write namespace using statement for cout and cin
using std::cout;
using std::cin;

/*
*/
int main()
{
	double meal_amount = 0;

	cout<<"Enter the meal amount: ";
	cin>>meal_amount;

	double tax_amount = get_sales_tax_amount(meal_amount);
	
	double tip_rate = 0;

	cout<<"Enter the tip rate: ";
	cin>>tip_rate;

	double tip_amount = get_tip_amount(meal_amount, tip_rate);

	double total = tip_amount + tax_amount + meal_amount;
	
	cout<<"Meal amount: "<<meal_amount<<"\n"<<"Sales Tax: "<<tax_amount<<"\n"<<"Tip amount: "<<tip_amount<<"\n"<<"Total: "<<total<<"\n";

	return 0;
}
