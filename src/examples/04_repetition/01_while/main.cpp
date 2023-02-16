#include "while.h"

using std::string;
using std::cin; using std::cout;


int main() 
{
	auot choice = 'n';
	do
	{
		auto num = 0;
		cout<<"Enter a number";
		cint>>num;

		auto result = sum_of_squares(num);
		cout<<"Sum of squares: " <<result<<"\n";
	} while (/* condition */);
	


	string str = "Hello";
	display(str);

	return 0;
}