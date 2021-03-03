#include <iostream>
/*
Better than Function Overloading:
Simple and generic than function overloading:

Ex:
double area(int x)
double area(int x, int y)

But we need variation of parameter: more generic
Ex: 
void swap(int &x, int &y) // Only used for int type

template <typename T>
void swap(T &x, T &y) // it work for integer and string
{
    T temp = x;
}
NOTE: có lẽ complier tự tạo ra nhiều phiên bản overloading cho người dùng :)) MAYBE ***
But similar :)), Khá giống đó chứ


*/

// METHOD 1: Old method: overloading function
/*
void swap(int &a, int  &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap(std::string &a, std::string  &b)
{
    std::string temp = a;
    a = b;
    b = temp;
}
*/

// METHOD 2: Template function
template <typename T> // *****************************
void swap(T &a, T&b)
{
    T temp = a;
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


    std::string aa = "My Name is HuynhTriTai";
    std::string bb = "How are you";

    std::cout << "a: " << aa << "\tb: " << bb << '\n';
    swap(aa, bb);
    std::cout << "a: " << aa << "\tb: " << bb << '\n';
}
/*
$ ./a.out
a: 10   b: 20
a: 20   b: 10
a: My Name is HuynhTriTai       b: How are you
a: How are you  b: My Name is HuynhTriTai
*/