#include<iostream>
#include<time.h>
#include<vector>
#include "customer.h"
#include "atm.h"

using std::vector;


int main()
{
	srand(time(NULL));//generate true randoms on each main run execution

	vector<Customer> customers;//empty customer list
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	customers.push_back(Customer());
	
	run_menu(customers);

	return 0;
}