#include <iostream>
#include <math.h>
using namespace std;
class Vector
{
    protected:
        double x;
        double y;
    public:
        Vector();
        Vector(double, double);
        double length();
        void info();
};
