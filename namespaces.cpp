#include <iostream>

/*
namespace: avoid naming conflict because we have limited by a possible name in programming
namespace: used for separate a section of code from outside world, to make our own library
std::string : string belong to standard namespace
 

How to create a namespace:
namespace utilz
{
    double multiply()
}
utilz::multiply(1, 2);

Application: ----------------------------------------------------------------
1. common functionality
2. a particular company/ particular project
-- For example, they have similar functionality, but not identical/ the same
3. classifying/ categories
*/
// using namespace utilz; // error: ‘utilz’ is not a namespace-name. 
// NOTEL: using namespace is used after define namespace. **********************
namespace utilz //***********************************
{
    void print_array(const int data[], int size)
    {
        for(int i = 0; i < size; i++)
        {
            std::cout << data[i] << '\t';
        }
        std::cout << '\n';
    }
}
//using namespace utilz; 
// **************DONOT do it because in we have print function with the same name in different namespace.*********


int main()
{
    int data[] = {1, 2, 3};
    utilz::print_array(data, 3); // 1       2       3
}