#include <iostream>

using std::cout;

int main()
{
    int number = 30; // 30
    cout << number << std::endl;

    int number_hex = 0x30; // 48
    cout << std::dec << number_hex << std::endl;
    cout << std::hex << number_hex << std::endl; // 30

    int number_oct = 030; // 24
    cout << std::dec << number_oct << std::endl;
    cout << std::oct <<number_oct << std::endl; // 30

}