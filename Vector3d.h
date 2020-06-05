#include "Vector.h"
class Vector3d : Vector
{
    protected:
        double z;
    public:
        Vector3d();
        Vector3d(double, double, double);
        double length();
        void info();
};