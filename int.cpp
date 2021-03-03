#include <iostream>
#include <climits> // dùng cho SHRT_MAX :)) 

// using namespace std; // DO NOT USE
using std::cout;
using std::endl;
using std::cin;

/*
int x = 5
-- size of data type depend on compiler and machine structure
maybe: 32 bits, or 16 bits, so
NOTE: WHat data type machine support???
NOTE: negative number, the Most significant bit is 1,
To find complement number or negative number we inverse all bits and add 1
NOTE: if we use sign bit, the range of int type divided by 2
*/

int main()
{
    //int x = 999999999999999999999999999999999; // warning: integer constant is too large for its type
    short a;
    int b; // 16 bits, but usually 32 bits
    long c; // at least 32 bits 
    long long d; // at least 64 bits 
    // short <= int <= long <= long long
    unsigned short aa;
    unsigned int bb;
    unsigned long cc;
    unsigned long long dd;

    // NOTE: sizeof() is operator, not a function 
    cout << sizeof(short) << std::endl; // 2 bytes
    cout << sizeof(int) << std::endl; // 4 bytes
    cout << sizeof(long) << std::endl; // 8 bytes
    cout << sizeof(long long) << std::endl; // 8 bytes

    /*
    Khi mà mình chắc chắn dùng mấy bits rồi thì:
    16 bits: dùng short 
    32 bits: dùng long NOT int **** because int at least is 16 bits :))

    */

    cout << SHRT_MAX << std::endl; // 32767
    cout << SHRT_MIN << std::endl; // -32768
    cout << INT_MAX << std::endl; // 2147483647
    cout << INT_MIN << std::endl; // -2147483648
    cout << LONG_MAX << std::endl; // 9223372036854775807
    cout << LONG_MIN << std::endl; // -9223372036854775808
    cout << LONG_LONG_MAX << std::endl; // 9223372036854775807
    cout << LONG_LONG_MIN << std::endl; // -9223372036854775808


    cout << USHRT_MAX << std::endl; // 65535
    // cout << USHRT_MIN << std::endl; //  // error: ‘USHRT_MIN’ was not declared in this scope :)) NOTE: USHRT_MIN = 0 :))
    cout << UINT_MAX << std::endl; // 4294967295
    //cout << UINT_MIN << std::endl; // 0
    cout << ULONG_MAX << std::endl; // 18446744073709551615
    //cout << ULONG_MIN << std::endl; // 0
    cout << ULONG_LONG_MAX << std::endl; // 18446744073709551615
    //cout << ULONG_LONG_MIN << std::endl; // 0

}
