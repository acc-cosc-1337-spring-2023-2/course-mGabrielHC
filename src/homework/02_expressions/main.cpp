//write include statements
#include "hwexpressions.h"
#include <iostream>

using std::cin;
using std::cout;


int main()
{
	auto meal_amount = 0.0;
	auto tip_rate = 0.0;
	auto tip_amount = 0.0;
	auto tax_amount = 0.0;
	auto total = 0.0;

	cout<<"Enter meal amount";
	cin>>meal_amount;

	tax_amount = get_sales_tax_amount(meal_amount);
	cout<<tax_amount<<"\n";

	cout<<"Enter the tip rate";
	cin>>tip_rate;

	tip_amount = get_tip_amount(meal_amount, tip_rate);
	cout<<tip_amount<<"\n";

	total = meal_amount + tax_amount + tip_amount;
	cout<<total<<"\n";

	cout<<"Meal amount: "<<meal_amount<<"\n";
	cout<<"Sales Tax: "<<tax_amount<<"\n";
	cout<<"Tip Amount: "<<tip_amount<<"\n";
	cout<<"Total: "<<total<<"\n";
	

	return 0;
}
