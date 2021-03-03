#include <iostream>
#include "user.h"
#include "teacher.h"
#include "student.h"

// PROBLEM: we cannot overide Virtual Method
void do_something (User user)
{
    user.output();
}


// SOLUTION: we must pass reference :)) NICER *********************************
void do_something_right (User& user)
{
    user.output();
}

int main()
{
    Teacher teacher;
    User& u = teacher;
    u.output(); // ERROR: error: ‘class User’ has no member named ‘output’
    // NOTE method output() only have in Teacher

    /*
    After add virtual method User::output() in User class. we can overide it 
    $ ./a.out
    User Created 
    Teacher Created 
    I am a teacher************************************************* We can override it from subclass teacher 
    
    CASE 2: add method output() but now, NOT Virtual
    $ ./a.out
    User Created 
    Teacher Created 
    I am a user *************************************************** We can not override it from subclass teacher 
    */

    Student student; // User Created , Student Created 
    User& u1 = teacher;
    User& u2 = student;

    u1.output(); // I am a teacher, because we overide output() method in class User
    u2.output(); // I am a student, because we overide output() method in class User

    do_something(u1); // I am a user, ERROR, we cannot overide the class method in User class. we must pass by reference
    do_something(u2); // I am a user, ERROR, we cannot overide the class method in User class. we must pass by reference

    do_something_right(u1); // I am a teacher ***************, pass by reference into function to overide Virtual Method
    do_something_right(u2); // I am a student ***************, pass by reference into function to overide Virtual Method
    

}
