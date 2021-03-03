#include <iostream>
#include <fstream>
#include <vector>

using std::cout;

int main()
{
    
    std::ifstream file ("tacos.txt"); // Not create new file when doesnt exit
    
    if(file.is_open())
    {
        cout << "It wordked!\n"; // When the file is not exit
    }
    else
    {
        cout << "Canot Open the file \n";
    }
    // METHOD 1: Get char
    /*
    char temp = file.get();
    cout << temp << '\n'; // C
    */
    // METHOD 2: Get string
    std::string line;
    getline(file, line);
    cout << line << '\n'; // Caleb is awesome


    // Problem: we cannot get the whitespace in line **************
    /*
    std::vector<std::string> names;

    std::string input;
    // NOTE: file >>; separator by whitespace
    while(file >> input) // return true if read successful
    {
        names.push_back(input);
    }

    for(std::string name: names)
    {
        cout << name << std::endl;
    }
    
    Caleb
    is
    awesome
    Amy
    Susan
    

        std::ifstream file ("tacos.txt"); // Not create new file when doesnt exit
    */

    // CASE 2: read each character, except whitespace
    /*
    std::vector<char> names;

    char input;
    // NOTE: file >>; separator by whitespace
    while(file >> input) // return true if read successful
    {
        names.push_back(input);
    }

    for(char name: names)
    {
        cout << name << ' '; // C a l e b i s a w e s o m e A m y S u s a n 
    }
    */
}