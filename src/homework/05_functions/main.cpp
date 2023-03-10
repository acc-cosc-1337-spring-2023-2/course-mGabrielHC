#include <iostream>
#include <string>
#include <func.h>

using std::cin;
using std::cout;
using std::cin;


int main() 
{
	auto option = 0;

	cout<<"Menu"<<"\n";
	cout<<"1- Get GC Content"<<"\n";
	cout<<"2- Get DNA Complement"<<"\n";
	cout<<"3- Exit"<<"\n";
	cout<<"Enter menu option"<<"\n";
	cin>>option;

	if(option == 1)
	{
		string dna = "AAA";
		cout<<"Enter a dna string: "<<"\n";
		cin>>dna;

		double dna_gc_content = get_gc_content(dna);
		double gc_percent = dna_gc_content * 100;

		cout<<"The GC content in the string "<<dna<<" is "<<gc_percent<<"%"<<"\n";
	}
	else if(option == 2)
	{
		string dna = "AAA";
		cout<<"Enter a dna string: "<<"\n";
		cin>>dna;

		string dna_complement = get_dna_complement(dna);

		cout<<"The dna complement of "<<dna<<" is "<<dna_complement<<"\n";
	}
	else if(option == 3)
	{
		cout<<"Thank you have a nice day"<<"\n";
	}
	else(option <= 0 || option > 3);

	return 0;
}