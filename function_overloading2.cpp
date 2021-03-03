#include <iostream>

struct Rectangle
{
    double length;
    double width;
};

/*
NOTE: We can use Default ARgumetns for this example because
We cannot set 
double area(double length, double width == length) ****************

*/

// Lecture 70: Function Overload 
double area(double length, double width) // rectangle area
{
    return (length * width);
}

double area(double length) // square area
{
    return length*length; // Repeative code *** need to change t0: return area(length, length);
}

double area(Rectangle rectangle)
{
    return rectangle.length* rectangle.width;
}


// LECTRE 71: Default Arguments
// METHOD 1: 2 Overloading function
double pow (double base, int pow)
{
    double total = 1;
    for(int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}

double pow(double base)
{
    return base*base;
}

//METHOD 2: Default Arguments for ONLY 1 Function 
double pow (double base, int pow = 2) // pow = 2
{
    double total = 1;
    for(int i = 0; i < pow; i++)
    {
        total *= base;
    }
    return total;
}



int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    std::cout << area(rectangle.length, rectangle.width) << std::endl; // 100
    std::cout << area(rectangle.length) << std::endl; // 100
    std::cout << area(rectangle) << std::endl; // 100

    // Default Arguments
    std::cout << pow(3, 3) << std::endl; // 27
    std::cout << pow(3) << std::endl; // 9

}