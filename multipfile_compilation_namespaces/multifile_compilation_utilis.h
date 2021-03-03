#ifndef MULTIFILE_COMPILATION_UTILIS_H 
#define  MULTIFILE_COMPILATION_UTILIS_H

// DONOT include struct in namespace
struct Rectangle
{
    double length;
    double width;
};

namespace utilz
{
    double area(double length, double width);

    double area(double length);

    double area(Rectangle rectangle);

    double pow (double base, int pow = 2);
}


#endif