// #include <iostream> // DONOT include this file 

#ifndef MULTIFILE_COMPILATION_UTILIS_H 
#define  MULTIFILE_COMPILATION_UTILIS_H
/*
// Because we define in both mainfile and implementation file.
SO this #ifndef we not include 2 times, it will create error
*/

struct Rectangle
{
    double length;
    double width;
};


double area(double length, double width);

double area(double length);

double area(Rectangle rectangle);

double pow (double base, int pow = 2);

#endif