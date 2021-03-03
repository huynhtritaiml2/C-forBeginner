#include <iostream>

// using namespace std; // DO NOT USE
using std::cout;
using std::endl;
using std::cin;
/*
using std::something only work in 1 curly bracket {}
*/

int main()
{
    int slices = 5;
    cout << "You have " << slices << " slices of pizza."<< std::endl;
    printf("%i \n", slices);
    /*
    NOTE: printf cần phải cho biết kiểu, cout thì không :)) 
    printf() lấy từ C, không nên dùng cho C++ :)) 
    */
    
    int number;
    cout << "How many slices of pizza do you want? ";
    cin >> number;
    cout << "You have " << number << " slices of pizza."<< std::endl;

    /*
    cin is instance of istream
    cout is intances of ostream
    */


}

/*
Datatype:
1. integer
-- 5/2=2 :)) cast it 
== 5/2.0 = 2.5
2. char
3. floating point
4. bool
5. array
6. struct
7. class
*/