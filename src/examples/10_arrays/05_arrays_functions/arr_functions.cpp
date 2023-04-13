//
#include<iostream>
#include "arr_functions.h"
//define iterate_array and loop through with ++ increment


void memory_leak()
{
    //create dynamic memory
    int* num = new int(5);
    //use it (for how long will I use the date)

    //forget to call delete
}