#include <iostream>
#include <vector> 

using std::cout;

/*
NOTE: the vector in function is a copy of original vector *************
That mean: any change we do inside the function do not change original vector from calling
Solution: add & before data
*/
void print_vector(std::vector<int> &data) // vector of original vector *********** add &
{
    data.push_back(12);
    for(int i = 0; i< data.size() ; i++)
    {
        cout << data[i] << '\t';
    }
    cout << '\n';
}
/*
void print_vector(std::vector<int> data) // vector of function is a copy of original
{
    data.push_back(12);
    for(int i = 0; i< data.size() ; i++)
    {
        cout << data[i] << '\t';
    }
    cout << '\n';
}
*/
int main()
{
    std::vector<int> data = {1, 2, 3};
    print_vector(data); // 1       2       3
    print_vector(data);
    print_vector(data);
    /*
    1       2       3       12
    1       2       3       12
    1       2       3       12
    when we call several times, it do not change the original data
    */
}