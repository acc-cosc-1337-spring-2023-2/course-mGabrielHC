#include "ref_pointers.h"
#include<iostream>

using std::cout;

int main() 
{
	
	auto num = 5;
	auto num1 = 10;
	int &num_ref = num;// num_ref reference the address of num

	cout<<"Num address is: "<<&num<<"\n";
	cout<<"Address that num_ref references: "<<&num_ref<<"\n";
	cout<<"Value of num: "<<num<<"\n";
	cout<<"Value that num_ref references"<<num_ref<<"\n";

	num_ref = num1;// num_ref value of 5 was changed to 10
	cout<<"Value that num_ref references"<<num_ref<<"\n";
	cout<<"Address that num_ref references: "<<&num_ref<<"\n";

	//pointer
	
	int *num_ptr = &num; //point to the memory of num

	cout<<"Num adress is: "<<&num<<"\n";
	cout<<"Address that num_ptr points to: "<<num_ptr<<"\n";
	cout<<"Value that num_ptr points to: "<<*num_ptr<<"\n";

	*num_ptr = 10;//works with the value that pointers points to
	cout<<"Num value is: "<<num<<"\n";
	cout<<"Value that num_ptr points to: "<<*num_ptr<<"\n";

	num_ptr = &num1;//point to the address of variable
	cout<<"Num1 adress is: "<<&num1<<"\n";
	cout<<"Address that num_ptr points to: "<<num_ptr<<"\n";

	int *num_ptr1 = &num;
	
	return 0;
}