#include <iostream>
/*
Test each function in a file by giving the input a comapre the output

https://www.youtube.com/watch?v=c37b4R24-CM&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=66
*/
double squared(double x)
{
    return x * x;
}

int main()
{
    if(squared(5) == 25)
    {
        std::cout<< "Test passed\n";
    }
    return 0;
}