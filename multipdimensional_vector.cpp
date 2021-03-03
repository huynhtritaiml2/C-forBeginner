#include <iostream>
#include <vector>

int main()
{
    
    std::vector<std::vector<int>> grades =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    /*
    the first for loop is for the outer collection: {1, 2, 3} {4, 5, 6} {7, 8, 9}
    the inner for loop is for 1, 2, 3

    2 dimensions :
    the first for loop == outer for loop = row
    the second for loop == inner for loop = column
    */
    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 3; c++)
        {
            std::cout << grades[r][c] << '\t';
        }
        std::cout << '\n';
    }
    /*
    1       2       3
    4       5       6
    7       8       9
    */
    

}