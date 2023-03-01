#include<iostream>
#include "checking_account.h"
#include<time.h>

using std::cout;

int main()
{
	srand(time(NULL));

	CheckingAccount account;//cust 0
	cout<<account.get_balance()<<"\n";

	CheckingAccount account1;//cust 1
	cout<<account.get_balance()<<"\n";

	return 0;
}