#include<iostream>
#include<string>

using std::cout; using std::string;

int main()
{
    string lang = "C++";
    auto num = 5;

    cout<<lang<<"\n";
    cout<<"Address of lang :" <<&lang<<"\n";
    cout<<"Address of num :" <<&name<<"\n";
    

    cout<<"size: "<<lang.size()<<"\n";
    cout<<"size: "<<lang.length()<<"\n";
    cout<<"Capacity: " <<lang.capacity()<<"\n\n";

    lang.append(" is great fo");//space counts towards filling capacity/size
    cout<<lang<<"\n";
    cout<<"size: "<<lang.size()<<"\n";
    cout<<"Capacity: " <<lang.capacity()<<"\n\n";

    lang.append("r");
    cout<<lang<<"\n";
    cout<<"size: "<<lang.size()<<"\n";
    cout<<"Capacity: " <<lang.capacity()<<"\n\n";

    /*create string
    string s0("Initial string");
    cout<<s0<<"\n";

    string s1(s0);
    cout<<s1<<"\n";

    string s3(s0, 8, 3);
    cout<<s3<<"\n";

    string s4("Another character sequence", 12);
    cout<<s4<<"\n";

    string s5(10, 'x');
    cout<<s5<<"\n";

    string s6(10, 42);// 42 is an *
    cout<<s6<<"\n";

    string s7("12345abc**(**)**");
    cout<<s7<<"\n";
    */

    return 0;
}