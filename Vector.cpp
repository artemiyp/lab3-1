#include "Vector.h"
Vector::Vector()
{
    x = 0.0;
    y = 0.0;
}
Vector::Vector(double _x, double _y)
{
    x = _x;
    y = _y;
}
double Vector::length()
{
    return sqrt(x*x+y*y);
}
void Vector::info()
{
    cout.precision(2);
    cout<<"[ "<<x<<"; "<<y<<" ]"<<endl;
    cout<<"Length = "<<length()<<endl;
}