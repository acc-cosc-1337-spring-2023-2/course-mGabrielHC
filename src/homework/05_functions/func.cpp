//add include statements
#include"func.h"

using std::string;

//add function code here

double get_gc_content(const string& dna)
{
    auto gc_content = 0.0;
    for(char gc_string : dna)
    {
        if(gc_string == 'G' || gc_string == 'C')
        {
            gc_content++;
        }
    }
    double gc_percent = gc_content / dna.length();
    return gc_percent;
}

string get_dna_complement(string dna)
{
     for(char& CompString : dna)
    {
    switch(CompString)
    {
        case 'A':
            CompString = 'T';
            break;
        case 'T':
            CompString = 'A';
            break;
        case 'C':
            CompString = 'G';
            break;
        case 'G':
            CompString = 'C';
            break;
        default:
            break;
        }
    }
    return dna;
}

string get_reverse_string(string dna)
{
    string reversed_string = "";
    for( int i = dna.length() - 1; i >= 0; i--)
    {
        reversed_string += dna[i];
    }
    return reversed_string;
}

