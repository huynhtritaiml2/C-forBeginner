/*
// DONOT include any lib in this implementation file
// NOTE: Define struct in header file
#include <iostream>

struct Rectangle // Define struct in header file ***********************
{
    double length;
    double width;
};
*/

#include "multifile_compilation_utilis.h" // Double, preprocessor will find in the current directory

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

// NOTE: Default Argument must in header file . ****************
//double pow (double base, int pow = 2) 
double pow (double base, int pow) 
{
    double total = 1;
    for(int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}