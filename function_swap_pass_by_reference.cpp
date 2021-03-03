#include <iostream>

/*
// PROBLEM: cannot work
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
*/

// SOLUTION
// There 4 way: NICE :)) all of them is work.
//void swap(int &a, int &b)
//void swap(int & a, int & b)
//void swap(int& a, int& b)
void swap(int&a, int&b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;

    std::cout << "a: " << a << "\tb: " << b << '\n';
    swap(a, b);
    std::cout << "a: " << a << "\tb: " << b << '\n';

}