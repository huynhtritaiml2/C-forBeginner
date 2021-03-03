#include <iostream>

using std::cout;
/*
Cách dùng char type:
1. store a character 
-- by using single quote for character
-- double quote is for string. :))
2. store small number 

NOTE: 128->255 from Extension ASCII not show in terminal
BEcause it not a standard
*/

int main()
{
    // Store a character
    char x = 'A'; 
    cout << x << std::endl; // A
    cout << sizeof(char) << std::endl; // 1 bytes

    x = 65;
    cout << x << std::endl; // A


    // print integer by casting ASCII table 0->127
    // http://www.asciitable.com/ for 0->127 and extension 128->255
    x = 'A'; 
    cout << (int) x << std::endl; // 65  


    // Extension ASCII is not a standard
    unsigned char c = 128; // c from 0 -> 255
    cout << c << std::endl; // � 

}
/*
Tìm thêm thông tin:
uninode c++ char16_t char32_t example
https://www.google.com/search?client=ubuntu&sxsrf=ALeKk02a0oQl1mLaklDQzKiE82WCcx2x4A%3A1614052178982&ei=Uns0YO2oO82bmAWAjKvwBA&q=uninode+c%2B%2B+char16_t+example&oq=uninode+c%2B%2B+char16_t+&gs_lcp=Cgdnd3Mtd2l6EAEYAjIHCCEQChCgATIHCCEQChCgATIHCCEQChCgATIHCCEQChCgAToICAAQsAMQzQJQ5BlY5BlgvCloAXAAeACAAZcBiAH3AZIBAzEuMZgBAKABAaoBB2d3cy13aXrIAQHAAQE&sclient=gws-wiz

*/