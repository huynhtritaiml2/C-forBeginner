#include <iostream>
#include  <float.h>

using std::cout;
/*
Limit of Float: Reference: https://en.cppreference.com/w/c/types/limits
How many significant digit we can trust
NOTE: only use double :)) ********************
NOTE: Nếu muốn 100% chính xác phải dùng cách khác, ví dụ như phần nguyên cho long long datatype,
Phần lẻ cho một long long datatype khác :)) **********************
Chính xác như tiền nè, tỷ tỷ mà lẻ cũng được trăm triệu :)) s
*/

int main()
{
    float a = 10.0 / 3;
    a = a * 100000000000000;
    double b;
    long double c;

    cout << a << std::endl; // 3.33333e+14
    cout << std::fixed << a << std::endl; 
    /*
    // 333333317812224.000000 : we only trust the first 6 digit for float datatype.

    */
    b = 10.0 / 3;
    b = b * 100000000000000;
    cout << b << std::endl; // 333333333333333.375000

    c = 10.0 / 3;
    c = c * 100000000000000000;
    cout << c << std::endl; // 333333333333333.348145

    b = 7.7E4;
    cout << b << std::endl; // 77000 *****
    b = 77000;
    cout << b << std::endl; // 77000



    cout << FLT_DIG << std::endl; // 6 trusworthy digit
    cout << DBL_DIG << std::endl; // 15 trusworthy digit
    cout << LDBL_DIG << std::endl; // 18 trusworthy digit

    cout << sizeof(float) << std::endl; // 4 bytes
    cout << sizeof(double) << std::endl; // 8 bytes
    cout << sizeof(long double) << std::endl; // 16 bytes

    //cout << FLT_MIN << std::endl; // 1.17549e-38
    //cout << FLT_MAX << std::endl; // 3.40282e+38
    //cout << DBL_MIN << std::endl; // 2.22507e-308
    //cout << DBL_MAX << std::endl; // 1.79769e+308
    //cout << LDBL_MIN << std::endl; // 3.3621e-4932
    //cout << LDBL_MAX << std::endl; // 1.18973e+4932


}