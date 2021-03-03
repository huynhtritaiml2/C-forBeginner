#include "multifile_compilation_utilis.h" 

namespace utilz // MUST have the same name in header file.
{
    double area(double length, double width) 
    {
        return (length * width);
    }

    double area(double length) 
    {
        return length*length; 
    }

    double area(Rectangle rectangle)
    {
        return rectangle.length* rectangle.width;
    }
    
    double pow (double base, int pow) 
    {
        double total = 1;
        for(int i = 0; i < pow; i++)
        {
            total *= base;
        }
        return total;
    }
}
