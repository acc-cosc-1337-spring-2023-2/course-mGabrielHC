//atm.h
#include<iostream>
#include "bank_account.h"
#include<vector>

void display_menu();
void run_menu(std::vector<BankAccount*> account);
void handle_menu_option(int option, BankAccount *account);