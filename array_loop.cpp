#include <iostream>

using std::cout;

/*
// ERROR: 9************************************************* Because array lose it size ***********************
void array_loop(int data[])
{
    for(int n : data)
    {
        cout << n << '\t'; //1       2       3       4       5       6       0       0       0       0
    }
    cout << '\n';
}
*/

int main()
{
    // METHOD 1: Range Base For Loop
    /*
    int data[] = {1, 2, 3, 4 , 5, 6};

    for(int n : data)
    {
        cout << n << '\t'; //1       2       3       4       5       6
    }
    */
    int data[10] = {1, 2, 3, 4 , 5, 6};

    for(int n : data)
    {
        cout << n << '\t'; //1       2       3       4       5       6       0       0       0       0
    }
    cout << '\n';

    //METHOD 2: ORIGINAL method, C-style method
    int size = sizeof(data) / sizeof(data[0]);
    for (int i = 0; i < size; i++)
    {
        cout << data[i] << '\t';//1       2       3       4       5       6       0       0       0       0
    }

    // CASE 2: LOOP in FUNCTION


}