//checking_account.h
#include<stdlib.h>//for rand() function

class CheckingAccount
{
public:
    CheckingAccount(){get_balance_from_db();}
    CheckingAccount(int b) : balance(b){/*empty function code block*/}
    int get_balance(){return balance; get_balance_from_db();}

private:
    int balance{0}; // explicitly initialize to zero
    void get_balance_from_db();
};