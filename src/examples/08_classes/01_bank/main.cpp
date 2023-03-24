#include<iostream>
#include<memory>
#include<time.h>
#include<vector>
#include "checking_account.h"
#include "atm.h"
#include "savings_account.h"

using std::cout; using std::cin; using std::vector;
using std::unique_ptr; using std::make_unique;
using std::move;

int main()
{
	srand(time(NULL));//generate true randoms on each main run execution
	vector<unique_ptr<BankAccount>> accounts;//empty list
	unique_ptr<BankAccount> savings = make_unique<SavingsAccount>();
	unique_ptr<BankAccount> checking = make_unique<CheckingAccount>();
	accounts.push_back(move(checking));
	accounts.push_back(move(savings));

	cout<<accounts[0]->get_balance()<<"\n";
	cout<<accounts[1]->get_balance()<<"\n";

	run_menu(accounts);

	return 0;
}