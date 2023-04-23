#include "my_vector.h"

//

using std::cout;

Vector::Vector(int s)
: capacity{s}, elements{new int[s]}
{
    cout<<"created new memory at "<<elements<<"\n";
}

Vector::Vector(const Vector& v)
: size{v.size}, capacity{v.capacity}, elements{new int[v.capacity]}
{
    cout<<"Copy constructor = created memory at "<<elements<<"\n";
    for(auto i=0; i < v.size; i++)
    {
        elements[i] = v.elements[i];
    }
}
Vector::~Vector()
{
    cout<<"delete the memory at "<<elements<<"\n";
    delete[] elements;
}

//NOT A CLASS FUNCTION; THESE ARE FREE FUNCTIONS
void use_vector()
{//do not create dynamic memory for v; use a stack variable Vector v(3);
    //Vector* v = new Vector(3);
    //delete v;

    //cout<<"loaded to the stack\n";
    Vector v(3); //recommended usage of my vector
    //Vector v1 = v;
    v[0] = 3;//write
    cout<<v[0]<<"\n";//read

}
