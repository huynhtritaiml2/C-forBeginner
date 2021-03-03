#include <iostream>

using std::cout;
/*
c++11 ONLY
*/
int main()
{
    auto x  = 5U; // unsigned 
    // x = "this is a string"; // error: invalid conversion from ‘const char*’ to ‘unsigned int’
    auto a = 5UL; // unsigned long 
    auto b = 5ULL; // unsgined long long 
    auto c = 5.0; // double
    auto d = 5.0L; // long double
    auto e = 5.0F; // float
}