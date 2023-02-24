//write include statements
#include "dna.h"
//write using statements
using std::cout;
using std::cin;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	auto option = 0;

	do
	{
		cout<<"1-Factorial"<<"\n";
		cout<<"2-Greatest Common Divisor"<<"\n";
		cout<<"3-Exit"<<"\n";
		cin>>option;

		if(option == 1)
		{
			auto num = 0;

			cout<<"Enter a number: "<<"\n";
			cin>>num;

			num = factorial(num);
			cout<<"The factorial of this number is: "<<num<<"\n";

		}
		else if(option == 3)
		{
			auto choise = 0;

			cout<<"are you sure you want to exit? if yes pres 3."<<"\n";
			cin>>choise;
			if(choise == 3)
			{
				option++;
			}

		}
		
	} while (option != 4);


	return 0;
}