#include <iostream>
#include "multifile_compilation_utilis.h" 

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    std::cout << utilz::area(rectangle.length, rectangle.width) << std::endl; // 100
    std::cout << utilz::area(rectangle.length) << std::endl; // 100
    std::cout << utilz::area(rectangle) << std::endl; // 100

    std::cout << utilz::pow(3, 3) << std::endl; // 27
    std::cout << utilz::pow(3) << std::endl; // 9
}
/*
Output:
$ ./math
100
100
100
27
9
*/
