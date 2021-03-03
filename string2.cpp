#include <iostream>

using std::cout;
using std::cin;

int main()
{
    /*
    Problem when get string from std::cin 
    we can take the space in that string, they stop when
    it get the tab, newline, whitespace*********
    */
    std::string greeting;
    //std::cin >> greeting; // Input: Hello There!
    std::cout << greeting << std::endl; // Hello

    // Longer, simple how to get the second word 
    std::string left_str;
    std::string right_str;
    //std::cin >> left_str; // Hello + whitespace
    //std::cin >> right_str; // there
    std::cout << left_str << std::endl; // Hello
    std::cout << right_str << std::endl; // there


    std::string ggreeting;
    getline(std::cin, greeting); // Hello There My name is Tai
    std::cout << greeting << std::endl; // Hello There My name is Tai

    //cin.getline()
    /*
    The member function cin.getline() works with C strings (i.e. arrays of char) 
    whereas the free function std::getline() works with C++ strings (i.e. std::string.) 
    You should not be using C strings at all when learning C++, which means you should not be using cin.getline().
    https://stackoverflow.com/questions/4872361/why-are-there-two-different-getline-functions-if-indeed-there-are#:~:text=The%20member%20function%20cin.,(i.e.%20std%3A%3Astring.)&text=std%3A%3Agetline()%20reads,stream%20up%20to%20some%20delimiter.
    */

   

}