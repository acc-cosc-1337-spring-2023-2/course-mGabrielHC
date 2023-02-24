//add include statements
#include "dna.h"
//add function(s) code here

int factorial(int num)
{
    auto sum = 1;

    while(num > 0)
    {
        sum *= num;
        num--;
    }
   return sum;
}
