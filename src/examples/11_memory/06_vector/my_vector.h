//
#ifndef VECTOR_H
#define VECTOR_H
#include<iostream>

class Vector
{
    public:
        Vector(int s);
        Vector(const Vector& v);//copy constructor: rule 1 of 3 in legacy
        Vector& operator = (const Vector& v);
        int Size()const{return size;}
        int Capacity()const{return capacity;}
        int& operator[](int index){return elements[index];}
        int& operator[](int index)const{return elements[index];}
        ~Vector();
    
    private:
    int* elements;//holds the dynamic list on the heap
    int size{0};//current size of the list; doubles as the current_index
    int capacity;//total available slots for elements
};

#endif

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS
void use_vector();