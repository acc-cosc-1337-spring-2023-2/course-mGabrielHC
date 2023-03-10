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

string get_reverse_string(string dna)
{
    string reversed_string = "";
    for( int i = dna.length() - 1; i >= 0; i--)
    {
        reversed_string += dna[i];
    }
    return reversed_string;
}

string get_dna_complement(string dna)
{
    string reversed_dna = get_reverse_string(dna);

    for(char& dnaComp : reversed_dna)
    {
    switch(dnaComp)
    {
        case 'A':
            dnaComp = 'T';
            break;
        case 'T':
            dnaComp = 'A';
            break;
        case 'C':
            dnaComp = 'G';
            break;
        case 'G':
            dnaComp = 'C';
            break;
        default:
            break;
        }
    }
    return reversed_dna;
}



