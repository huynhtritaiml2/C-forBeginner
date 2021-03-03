#include <iostream>

using std::cout;

#define X 10
/*
NOTE: X is upper case
NOTE: we do not set the type for it :)) so
const int x = 10 thì tốt hơn 
*/

/*
read-only memory 
const-qualified == const in namespace
1. const
2. define 
3. enum 



-- Cách đặt tên
. k_name : k == constant 
. Không nên đặt tên theo kiểu hoa thường lẫn lộn : 
Ex: Constant , CoNsTaNt vì nó rất rồi về chức năng và có quá nhiều trường hợp

*/

int main()
{
    const int x = 5;
    //x = 10; //  error: assignment of read-only variable ‘x’

    //const int setting; // error: uninitialized const ‘setting’
    //setting = 3; // error: assignment of read-only variable ‘setting’

    //enum ??????????????????????????
    //enum { y = 100}; // Error : 
    //y = 50;

    

}