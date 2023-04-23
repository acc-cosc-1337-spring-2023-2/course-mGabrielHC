#include "val_ref.h"

void val_params(int num)
{
    num = 20;
}

void ref_params(int &num)
{
    num = 20;
}

void ref_const_params(const int &num)//read only access to num
{
    //num = 20; we cant modify
    //cout<<num;//but we can read the value
}