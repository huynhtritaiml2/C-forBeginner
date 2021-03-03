#include <iostream>

using std::cout;

/*
I : initialize
C : condition
u : Update

int i = 0
while (i< 10)
{

}

for (int i = 0; i < 10; i++)
{

}
NOTE: while: do more than 0 times
NOTE: do while : do more than 1 times.

*/

int main()
{
    
    std::string password = "hellotai712";
    std::string guess;
    do
    {
        cout << "Guess the password: ";
        std::cin >> guess;
    } while(guess != password);

    

/*
//THis method create error 
//error: ‘guess’ was not declared in this scope
//error: ‘password’ was not declared in this scope
    do 
    {
        std::string password = "hellotai712";
        std::string guess;
        cout << "Guess the password: ";
        std::cin >> guess;
    } while(guess != password);

*/
// Method 2: ********************** Cách này cũng ổn mà lặp lại quá :)) và ngta thích dùng while hơn 
    std::string pas = "hellotai712";
    std::string guesss;
    cout << "Guess the password: ";
    std::cin >> guesss;

    while(guesss != pas)
    {
        cout << "Guess the password: ";
        std::cin >> guesss;
    }
    



    // NOTE: ***********************
    // while(true); // infinite loop 
    cout<< "done\n" << std::endl;
}