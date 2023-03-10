//write include statements
#include <iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout;

using std::cin;

int main()
{
	int num;
	cout<<"Enter value for num: ";
	cin>>num;

	auto result = multiply_numbers(num);
	cout<<"Result is: " <<result<<"\n";

	int num1 = 4;

	result = multiply_numbers(num1);
	cout<<"Result is: " <<result<<"\n";
	

	return 0;
}
