#include "text_output.h"

using std::cout;        using std::string;
using std::ofstream;    using std::ifstream;
using std::getline;

void output_to_file()
{   
    cout<<"Create file object/variable\n";
    ofstream myfile;//represents a file

    cout<<"open file for writing\n";
    myfile.open("example.dat");//open in text mode

    cout<<"write to file...\n";
    myfile<<"Write a line to file\n";
    myfile<<"Write another line to file\n";
    myfile<<"Write another line to file\n";

    cout<<"Close the file\n\n";
    myfile.close();
}

void read_from_file()
{
    string line;//represents a line from a file
    cout<<"Create file object\n";
    ifstream infile("example.dat");

    cout<<"try to open the file\n";
    if(infile.is_open())
    {
        cout<<"Read from file\n";
        while(getline(infile, line))
        {
            cout<<line<<"\n";
        }
        cout<<"Close the file object\n";
        infile.close();
    }
    else
    {
        cout<<"Cannot open the file...\n";
    }
    
}