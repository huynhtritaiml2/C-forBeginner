#include <iostream>

using std::cout;
/*
Lecture 33: if else if else 
Lecture 35 : switch
expression: Không có dấu bằng 
equation: có dấu bằng, và có 2 express cho mỗi bên 
if (expression)
{
    //code
}
else if(expression)
{

}
else
{

}

switch(variable) // NOTE : variable Not express

NOTE: variable đúng thì nhảy tới số đó 
express nếu đúng thì làm, không thì không làm hoặc làm cái khác

NOTE: switch(age) thường dùng cho menu, giao diện, hoặc few option 

switch(age)
{
    case 17:
        //code
        break;
    case 18:
        // code
        break;
    default:
        // code 
        break;
}

NOTE: variable MUST in int datatype :)), it cannot be double or float ****
*******************************

*/
int main()
{
    int age;
    cout << "What is your age?: ";
    std::cin >> age;


    switch (age)
    {
        case 13:
            cout << "You age is 13. Wow" << std::endl;
            break;
        case 14:
            cout << "You are 14 \n";
            break;
        default:
            cout << "Catch all\n";
            break;
    }

    // Case 2: 
    switch (age)
    {
        case 13:
        case 14:
            cout << "You are maybe 13 or 14 :)) \n";
            break;
        default:
            cout << "Catch all\n";
            break;
    }

    // Case 3: ********************
    enum season {summer, spring, fall, winter};
    season now = winter;
    switch (now)
    {
        case summer:
            break;
        case spring:
            break;
        case fall:
            break;
        case winter:
            cout << "Stay swarm! \n";
            break;
    }

    // Case 3: ********************
    enum class Season {summer, spring, fall, winter};
    Season noww = winter;
    switch (noww)
    {
        case Season::summer:
            break;
        case Season::spring:
            break;
        case Season::fall:
            break;
        case Season::winter:
            cout << "Stay swarm! \n";
            break;
    }
}