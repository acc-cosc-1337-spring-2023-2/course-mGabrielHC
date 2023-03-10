#include "function_str.h"

void str_val_ref_params(std::string str1,std::string &str2,const std::string & str3)
{
    str1 = "changed";
    str2 = "changed";
    //str3 = "changed"; // this produces a build /syntac error
    //cout<<str3<<"\n";//this would work
}