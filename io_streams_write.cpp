#include <iostream>
#include <fstream>
#include <vector>


using std::cout;
/*
Input stream: typing from keyboard
Output stream: 
Lecture 59: C++ Programming Tutorial 59 - Intro to IO Streams
https://www.youtube.com/watch?v=io3rL-Ni7DE
for more visualization 

keyboard -> buffer -> running program/ when we press endter 
text file/ configuration file -> 

istream -> cin

ifstream -> input file stream

ofstream -> output file stream
*/

int main()
{
    std::string filename;
    std::cin >> filename;
    /*
    // Method 1: 
    //std::ofstream file;
    //file.open("hello.txt");
    */
    //Method 2:
    //std::ofstream file ("hello.txt"); // Create new file when do not have, or OVerwrite it
    //std::ofstream file ("hello.txt", std::ios::app); // std::ios::app == append
    std::ofstream file (filename.c_str(), std::ios::app);

    if(file.is_open())
    {
        std::cout << "Success n00b\n";
    }
    else
    {
        std::cout << "Fail: Unable to access file. Try them later\n";
        return 0;    
    }

    std::vector<std::string> names;
    names.push_back("Caleb");
    names.push_back("Amy");
    names.push_back("Susan");

    for(std::string name : names)
    {
        file << name << std::endl;
    }
    
    file.close(); // When we close the program, file will be automatically closed
 
}