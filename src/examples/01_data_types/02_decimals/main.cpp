#include "decimals.h"// tell C++ where you find add to double 1 function
#include <iostream>

using std::cout;//explictly tell C++ we are only using cout from iostream and std

int main()
{
    double num = 0;
    double num1 = add_to_double_1(num);

    //we do something
    num1 = num1 + 1;

    cout<<"Adding to a double:"<<num1<<"\n";

    return 0;
}