#include <iostream>
//#include <string> // to use string class

using std::cout;
/*
Read more:
http://www.cplusplus.com/reference/string/string/ 
*/
int main()
{
    std::string greeting; // Empty string 
    /*
    Similar to:
    std::string greeting = "";
    */
    cout << greeting[0] << std::endl; // nothing
    greeting = "hello";
    cout << greeting[0] << std::endl; //h 

    std::string complete_greeting = greeting + " there";
    cout << complete_greeting << std::endl; // hello there

    cout << complete_greeting.length() << std::endl; // 11
    cout << complete_greeting.size() << std::endl; // 11, similar to length()


    /*******************************************
    String in C have a lot of restriction :))
    1. String size in C we cannot change.  C string is array of character 
    
    */
   char name[] = "Caleb"; // "Caleb\0" : six character
   //name = "t"; // Error, cannot change like that, even shorter than 6
   //name = "t Caleb"; // Error, cannot change like that , even larger than 6
   name[0] = 'D'; // we only use this way :))


   // C++ string we can change the size and content of string:
   // *********************
   complete_greeting = "Go away";
   cout << complete_greeting << std::endl; // Go away


    // method in string c++
    greeting.append(" append at the end of the string");
    std::cout << greeting << std::endl; // hello append at the end of the string

    greeting.insert(3, "ii");
    std::cout << greeting << std::endl; // hel       lo append at the end of the string

    greeting.erase(3, 2);
    // index, number of character we want to delete
    std::cout << greeting << std::endl; // hello append at the end of the string

    // delete the last 2 character :)) diffcicult
    greeting.erase(greeting.length() - 1 - (2-1), 2);
    std::cout << greeting << std::endl; // hello append at the end of the stri

    greeting.pop_back();
    std::cout << greeting << std::endl; // hello append at the end of the str

    // REplace the string 
    greeting.replace(0, 4, "Heaven");
    // index, number of deleted character, replaced string
    std::cout << greeting << std::endl; //Heaveno append at the end of the str

    // using replace function better ***************
    greeting = "What the hell?";
    greeting.replace(greeting.find("hell"), 4, "****");
    std::cout << greeting << std::endl; // What the ****?

    // substr()
    greeting = "What the UP?";
    std::cout << greeting.substr(9, 2) << std::endl; // UP


    // find_first_of()
    // NOTE: Tìm trong string kí tự đầu tiên có trong (" ") :))
    std::cout << greeting.find_first_of("aeiou") << std::endl; // 2 í the index of character 2
    std::cout << greeting.find_first_of("!") << std::endl; // 18446744073709551615 
    /*
    npos == 18446744073709551615 == cannot find 
    */
    unsigned long x = -1; // NOTE: unsigned 
    std::cout << x << std::endl; // 18446744073709551615 similar to cannot find 

    // *********************
    if(greeting.find_first_of("!") == -1)
    {
        std::cout << "NOT FOUND" << std::endl; // NOT FOUND
    }

    // Compare 2 string, 2 ways: 
    // NOTE:  dùng Method thì được hơn, vì Javar cũng dùng method :))
    greeting = "What is UP?";
    if(greeting == "What is UP?")
    {
        std::cout << "Equals" << std::endl; // Equals 
    }

    if(greeting.compare("What is UP?") == 0)
    {
        std::cout << "Equals" << std::endl; // Equals
    }    



}