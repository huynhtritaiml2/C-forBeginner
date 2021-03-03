#include <iostream>
/*
templatized: tạo hình 
Overloading Function Template:
PROBLEM: we cannot swap an array **************
void swap(T &a, T&b)
{
    T temp = a;
    a = b; // ERROR: array cannot swap like this
    b = temp;
}

*/

template<typename T>
void print_2array(T a[], T b[], int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << a[i] << " " << b[i] << '\t';
    }
    std::cout <<'\n';
}


template <typename T> 
void swap(T &a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}

template<typename T>
void swap(T a[], T b[], int size) 
// NOTE: we do not need pass by reference
// Because: pass array to function, it is a pointer
// NOTE: must have square bracket [], and size of array
{
    for(int i = 0; i < size; i++)
    {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
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


    int nines[] = {9, 9, 9, 9, 9, 9};
    int ones[] = {1, 1, 1, 1, 1, 1};

    
    print_2array(nines, ones, 6); // 9 1     9 1     9 1     9 1     9 1     9 1 : Before
    swap(nines, ones, 6);
    print_2array(nines, ones, 6); // 1 9     1 9     1 9     1 9     1 9     1 9 : After
}
/*
$ ./a.out
a: 10   b: 20
a: 20   b: 10
a: My Name is HuynhTriTai       b: How are you
a: How are you  b: My Name is HuynhTriTai
9 1     9 1     9 1     9 1     9 1     9 1
1 9     1 9     1 9     1 9     1 9     1 9
*/