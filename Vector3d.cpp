#include "Vector3d.h"
Vector3d::Vector3d() : Vector()
{
    z = 0.0;
}
Vector3d::Vector3d(double _x, double _y, double _z) : Vector(_x, _y)
{
    z = _z;
}
double Vector3d::length()
{
    return sqrt(x*x+y*y+z*z);
}
void Vector3d::info()
{
    cout.precision(2);
    cout<<"[ "<<x<<"; "<<y<<"; "<<z<<" ]"<<endl;
    cout<<"Length = "<<length()<<endl;
}