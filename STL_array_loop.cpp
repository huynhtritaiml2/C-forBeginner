#include <iostream>
#include <array>

using std::cout;

// NOTE: it ************************************ STL array must in the same size when pass to function
//void STL_array_loop(std::array<int, 10> data) // could not convert ‘data’ from ‘array<[...],6>’ to ‘array<[...],10>’
void STL_array_loop(std::array<int, 6> data)
{
    for (int n : data)
    {
        cout << n << '\t'; // 1       2       3       4       5       6
    }
    cout << '\n';   
}

int main()
{
    std::array<int, 6> data = {1, 2, 3, 4 ,5 ,6};

    // METHOD 1: Range Base For Loop
    for (int n : data)
    {
        cout << n << '\t'; // 1       2       3       4       5       6
    }
    cout << '\n';

    // METHOD 2:
    for (int i = 0; i < data.size(); i++)
    {
        cout << data[i] << '\t'; // 1       2       3       4       5       6
    }
    cout << '\n';

    // CASE 2: LOOP in FUNCTION
    STL_array_loop(data);

}