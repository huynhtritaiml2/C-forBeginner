#include <iostream>
#include <vector> // ******************* :))

using std::cout;
/*
c++11 ONLY
Reallocate memory, when overload 
NOTE: vector know it size, even we pass into a function
NOTE: working with vector easier than 
template == generic: 
Bản mẫu == chủng loài 
*/

/*
More function:
https://www.geeksforgeeks.org/vector-in-cpp-stl/ 
*/

int main()
{
    std::vector<int> data = {1,2,3};
    data.push_back(12);
    cout << data[3] << std::endl; // 12
    cout << data[data.size() - 1] << std::endl; // 12 : take the last element
    
    // Remove an item
    cout << data.size() << std::endl; // 4
    data.pop_back();
    cout << data.size() << std::endl; // 3


}