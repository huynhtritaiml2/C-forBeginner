#include <iostream>
#include <array>
using std::cout;

/*
templatized array == STL array == generic array : have a type inside tempalte mark
template mark: <>

Array : stastic array
Vectors: dynamically array
templatize array: stastic array

Array pass to the function: do not remember the size()
Vectors: Remember the size
templatize array: Remember the size


Array: pass by pointer to function
Vectors: pass by value to function, a copy
templatize array: a copy

Templatize array is Object which have array + sthing
*/

/*
COMPARASION:

1.
std::vector<int> stuff;
std::vector<int> things = stuff; // things is copied of original stuff
NOTE: we cannot do it for array, because array is pointer, and we just copy a point or address
NOTE 2: when copy array, we must use loop to copy each element from original array to new array

NOTE: Use Vector because it EASYYYYYYYYYYYYYYYYYYYYYYYY *******
NOTE: when choose C-style array. we should schoose templatized array ********************
Because Vector, and templatized array can copy to new ____
and Because C-style array, templatized array have a fixed size, stastically size **********
NOTE 2: C-style array pass by pointer, so it forget its size, and we must pass the second arguments is its size **************

NOTE: Vector, templatized array ,we should pass by pointer, because we can change it value, and it save memory in STACK

NOTE: 

Coi khúc cuối có bảng tổng hợp:
C++ Programming Tutorial 57 - Array Vs Vector Vs STL Array

https://www.youtube.com/watch?v=VW8eDxB0c-s&list=PL_c9BZzLwBRJVJsIfe97ey45V4LP_HXiG&index=59
*/
// 
void print_array(std::array<int, 20> &data, int size) // ORIGINAL ARRAY
{
    for(int i = 0; i < size; i++)
    {
        std::cout << data[i] << '\t';
    }
    std::cout << '\n';
}

int main()
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data, 3); // 1       2       3       0       0       0       0       0      0 0       0       0       0       0       0       0       0      0 0       0
}


/*
// Print size which is number element in array 
void print_array(std::array<int, 20> data, int size) // copied array of orginal array
{
    for(int i = 0; i < size; i++)
    {
        std::cout << data[i] << '\t';
    }
    std::cout << '\n';
}

int main()
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data, 3); // 1       2       3       0       0       0       0       0      0 0       0       0       0       0       0       0       0      0 0       0
}
*/


// Print all the array 
/*
void print_array(std::array<int, 20> data) // copied array of orginal array
{
    for(int i = 0; i < data.size(); i++)
    {
        std::cout << data[i] << '\t';
    }
    std::cout << '\n';
}

int main()
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data); // 1       2       3       0       0       0       0       0      0 0       0       0       0       0       0       0       0      0 0       0
}
*/