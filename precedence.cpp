#include <iostream>

using std::cout;
/*
REead More: **********************
https://en.cppreference.com/w/cpp/language/operator_precedence 

Precedence: độ ưu tiên 
Associativity : trái qua phải. hay phải qua trái 

NOTE: Khi mà không chắc right to left :)), thì dùn () pathesis để nó thực hiện trước
không cần phải biết quá rõ, right-to-left là dễ lầm nhất 
*/
int main()
{
    int x = 10 / 4; // 2
    cout << x << std::endl;

    double a = 10 / 4; // 2 :)) still WRONG 
    cout << a << std::endl;

    a = 10. / 4; // 2.5 :)) CORRECT  
    cout << a << std::endl;

    a = 10 % 4;
    cout << a << std::endl; // 2
    
    // Associativity
    // NOTE: = is right-to-left 
    double y;
    x = 10;
    y = 1;
    y = x = 100; // tương đương y = (x = 100); làm vậy cho nó chắc 
    
    cout << y << '\t' << x << std::endl; // 100     100

    // NOTE: (y = x) = 100; tương đương y = x; y = 100 :)) ************************
    x = 10;
    y = 1;
    (y = x) = 100;
    cout << y << '\t' << x << std::endl; // 100     10

}