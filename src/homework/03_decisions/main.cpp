//write include statements
#include "decisions.h"
#include<iostream>

using std::cout;
using std::cin;

int main() 
{
	cout<<"MAIN MENU"<<"\n";

	auto option = 0;

	cout<<"Enter a menu option"<<"\n";
	cout<<"1-Letter grade using if"<<"\n";
	cout<<"2-Letter grade using switch"<<"\n";
	cout<<"3-Exit"<<"\n";
	cin>>option;

	if(option == 1)
	{
		auto grade = 0;

		cout<<"Enter a grade: ";
		cin>>grade;

		auto result = get_letter_grade_using_if(grade);
		cout<<result<<"\n";
	}

	else if(option == 2)
	{
		auto grade = 0;

		cout<<"Enter a grade: ";
		cin>>grade;

		auto result = get_letter_grade_using_switch(grade);
		cout<<result<<"\n";
	}
	else(option == 3);

	return 0;
}