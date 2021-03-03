#include <iostream>

using std::cout;
/*
array: statically sized, can be called collection
vector: dynamically sized 
templatized array:  mảng tạo khuôn mẫu : Object struct contain array

int guesses[size]
NOTE: index: 0-> size-1


vector: is list in Python, or array list
NOTE: we can add as many as element in the vector/list


*/

int main()
{
    //int guesses[20];
    int guesses[10] = {10, 13, 54, 42, 12, 12, 13}; // == int guesses[7] = {10, 13, 54, 42, 12, 12, 13};
    // guesses is called integer array
    // guesses[3] is an integer
    int number_elements = 7;

    cout << guesses[3] << std::endl; // 42
    guesses[3] = 300;
    cout << guesses[3] << std::endl; // 30

    //NOTE: we canot use guesses.size() or guesses.length()
    //NOTE: sizeof() return bytes
    int size = sizeof(guesses) / sizeof(guesses[0]); // NOTE: this will not work if we are inside the function
    cout << size << std::endl;
    for(int i = 0; i < number_elements; i++)
    {
        cout << guesses[i] << '\t'; 
        /*
        Before:
        10      13      54      300     12      12      13
        After:
        10      13      54      300     12      12      13      0       0       0
        int guesses[10] = {10, 13, 54, 42, 12, 12, 13};

        Solution: This is the best method
        10      13      54      300     12      12      13
        int number_elements = 7;
        for(int i = 0; i < number_elements; i++)




        */
    }



    /*
    int guess[20];
    
    Initialize:
    guesses[0] = 10; // assign a value 
    std::cin >> guess[0];
    std:cout << guess[0] << std::endl; 
    */

}