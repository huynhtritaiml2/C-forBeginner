#include <iostream>
#include <cmath>
using std::cout;

/*
Read more functin : 
https://en.cppreference.com/w/cpp/numeric/math

*/

int main()
{
    std::cout << sqrt(25) << std::endl; // 5
    std::cout << sqrt(-25) << std::endl; // -nan = Not A Number

    cout << pow(9, 999) << std::endl; // inf
    cout << pow(-9, 999) << std::endl; // -inf

    cout << NAN << std::endl; // nan
    cout << INFINITY << std::endl; // inf
    cout << -INFINITY << std::endl; // -inf

    cout << remainder(10, 3) << std::endl; // 1
    cout << 10 % 3 << std::endl; // 1
    /*
    NOTE: modulus only work for integer
    NOTE: remainder can return a floating point value

    */
    cout << remainder(10, 3.25) << std::endl; // 0.25 :)) ***** NICe
    //cout << 10 % 3.25 << std::endl; // error: invalid operands of types ‘int’ and ‘double’ to binary ‘operator%’

    cout << fmod(10, 3.25) << std::endl;
    /*
    fmod() Returns the floating-point remainder of numer/denom (rounded towards zero):
    remainder() returns the same but with the quotient rounded to the nearest integer (instead of truncated).

    */
    cout << remainder(9.6, 3.5) << std::endl; // -0.9
    cout << fmod(9.6, 3.5) << std::endl; // 2.6
    // NOTE: fmod() có vẻ chính xác hơn 
    /*
    using fmod() to compute the remainder  computes 2 as quotient (truncated) 
    returns 2.6 as remainder 
    d = fmod(a,b); 
        
    using remainder() to compute the remainder computes 3 as quotient (rounded) 
    returns -0.9 as remainder 
    c = remainder(a,b);
    https://www.geeksforgeeks.org/floating-point-manipulation-math-h/
    */

    // fmax(), fmin() số lớn nhất và nhỏ nhất giữa 2 số 
    // Cách này dễ đọc, và cô động 
    cout << fmax(10, 3.25) << std::endl; // 10 
    cout << fmin(10, 3.25) << std::endl; // 3.25


    cout << ceil(3.25) << std::endl; // 4 
    cout << floor(3.25) << std::endl; // 3
    cout << ceil(-3.25) << std::endl; // -3 
    cout << floor(-3.25) << std::endl; // -4


    // floor and trunc
    cout << trunc(-3.25) << std::endl; // -3
    cout << floor(-3.5) << std::endl; // -4

    // round() put to the closet integer 
    cout << round(-3.49) << std::endl; // -3
    cout << round(-3.5) << std::endl; // -4 
    cout << round(-3.51) << std::endl; // -4

    // nearbyint() : The value of x rounded to a nearby integral (as a floating-point value).
    cout << std::nearbyintf(-3.49) << std::endl;
    // THấy méo khác mấy 

}