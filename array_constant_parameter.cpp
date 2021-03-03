#include <iostream>

using std::cout;
/*
NOTE: When passing by reference (by default) in array:

NOTE: similar to below case, vector, STL array, when pass by reference should NOTE these ERROR.
*/

/*
// METHOD 1: pass pointer array into a function, and we can change value in array
void print_array(int data[], int size)
{
    for(int i = 0; i < size; i++)
    {
        data[i]++; // change value in original array
        cout << data[i] << '\t';
    }
    cout << '\n';
}
*/

// METHOD 2: pass pointer array into a CONSTANT parameter of function
/*
void print_array(const int data[], int size) // NOTE: const int data [] NOT int data [] 
{
    for(int i = 0; i < size; i++)
    {
        // data[i]++; // ERROR: error: increment of read-only location ‘*(data + ((sizetype)(((long unsigned int)i) * 4)))’
        cout << data[i] << '\t';
    }
    cout << '\n';
}
*/


// CASE 2:
// METHOD 1: PROBLEM
/*
void do_something(int array[]) // ERROR: NOT const array[]
{

}
*/
void do_something(const int array[]) // SOLUTION: 
{

}

// METHOD 2: Solution
void print_array(const int data[], int size) // NOTE: const int data [] NOT int data [] 
{
    for(int i = 0; i < size; i++)
    {
        // data[i]++; // ERROR: error: increment of read-only location ‘*(data + ((sizetype)(((long unsigned int)i) * 4)))’
        cout << data[i] << '\t';
    }
    cout << '\n';
    do_something(data); // error: invalid conversion from ‘const int*’ to ‘int*’ [-fpermissive]
}

int main()
{
    int data[] = {1, 2, 3};
    print_array(data, 3); // 2       3       4
    print_array(data, 3); 
    /*
    Before: void print_array(int data[], int size)
    // 3       4       5 // we have change the original data
    After: void print_array(const int data[], int size)

    */
}

