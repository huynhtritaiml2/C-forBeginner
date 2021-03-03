#include <iostream>
#include <vector>

using std::cout;

void vector_loop(std::vector<int> data)
{
    for(int n : data)
    {
        std::cout << n << '\t'; // 1       2       3       4       5       6
    }
    cout << '\n';
}

int main()
{
    std::vector<int> data = {1, 2, 3, 4, 5, 6};

    // METHOD 1: Range Base For Loop
    for(int n : data)
    {
        std::cout << n << '\t'; // 1       2       3       4       5       6
    }
    cout << '\n';


    // METHOD 2: 
    for(int i = 0; i < data.size(); i++)
    {
        cout << data[i] << '\t'; // 1       2       3       4       5       6
    }
    cout << '\n';

    // CASE 2: LOOP in FUNCTION
    vector_loop(data); // 1       2       3       4       5       6
}