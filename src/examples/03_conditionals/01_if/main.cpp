#include<iostream>
#include "if.h"//to use is_even function here

using std::cout;
using std::cin;

int main() 
{
	auto hours = 0;
	cout<<"Enter hours: ";
	cin>>hours;

	cauto overtime = is_overtime(hours);

	if(overtime == true)
	{
		cout<<"Overtime\n";
	}

	auto even = false;
	auto value = 0;

	//create a bool variable named even
	//create an int variable named value
	cout<<"Enter a number: ";
	cin>>value;
	//prompt user for a keyboard number
	//assign the number to the value variable

	//call the is_even function with value as its argument
	//and assign its return value to the even variable
	even = is_even(value);

	//display even if number is even
	if(even)
	{
		cout<<value<<"is even\n";
	}
	else
	{
		cout<<value<<"is odd\n";
	}

	return 0;
}
