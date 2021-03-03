#include <iostream>

using std::cout;
/*
Khi dùng std::boolalpha thì những lần in bool_datatype sẽ là true false lun 
1
true
false
false
true
true
true
true
*/
int main()
{
    bool pizza_is_good = true;
    cout << pizza_is_good << std::endl; // 1 
    cout << std::boolalpha << pizza_is_good << std::endl;
    pizza_is_good = false;
    cout << pizza_is_good << std::endl; // 0

    pizza_is_good =  0;
    cout << pizza_is_good << std::endl; // 0 

    pizza_is_good =  1;
    cout << pizza_is_good << std::endl; // 1 
    pizza_is_good =  2;
    cout << pizza_is_good << std::endl; // 1 

    pizza_is_good = -1;
    cout << pizza_is_good << std::endl; // 1 
    pizza_is_good = -2;
    cout << pizza_is_good << std::endl; // 1 

    bool check = true;
    cout << check << std::endl; // true 
    // NOTE :)) After using std::boolalpha cho pizza_is_good thì check vẫn có hiệu lực :)) ****
    cout << sizeof(bool) << std::endl; 
    // 1 bytes ??? :)) 1 bit thối chứ, chắc ý nói 1 bit là gần 1 byte :)) 
}