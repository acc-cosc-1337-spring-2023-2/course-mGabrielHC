#include<iostream>
#include "checking_account.h"
#include<time.h>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
#include<vector>

using std::cout;
using std::cin;
using std::vector;


int main()
{
	vector<BankAccount*> account;//create an empty list of BankAccount pointers
	srand(time(NULL));
	SavingsAccount savings;
	CheckingAccount checking;//cust 0

	account.push_back(&checking);
	account.push_back(&savings);


	run_menu(account);

	return 0;
}