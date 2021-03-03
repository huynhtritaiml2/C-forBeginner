#include <iostream>
/*
function overloading: 2 hàm có chung tên
1. Phải khác kiểu parameter, hoặc khắc số lượng parameter, hoặc cả 2
2. return type không ảnh hưởng. 


*/
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