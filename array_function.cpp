#include <iostream>

using std::cout;
/*
When we pass an array into a function, it will lose information about how big it is 

NOTE: vector, we do not to use size ******************
NOTE: size of array always larger than we use 
*/
// SOLUTION
void print_array(int array[], int size)
{
    cout << size << std::endl;
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << '\t'; // 10      13      54      42      12      12      13
    }
}

int main()
{
    int guesses[] = {10, 13, 54, 42, 12, 12, 13};
    int size = sizeof(guesses) / sizeof(guesses[0]);
    print_array(guesses, size); // NOTE: pass array to function do not use []
}

// PROBLEM
/*
void print_array(int array[])
{
    *****************************************
    std::cout << sizeof(array) << std::endl; // 8: is int* , warning: ‘sizeof’ on array function parameter ‘array’ will return size of ‘int*’
}

int main()
{
    int guesses[] = {10, 13, 54, 42, 12, 12, 13};
    std::cout << sizeof(guesses) << std::endl; // 28 
    print_array(guesses); // NOTE: pass array to function do not use []
}
*/