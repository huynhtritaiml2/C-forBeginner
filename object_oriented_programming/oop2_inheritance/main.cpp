#include <iostream>
#include "user.h"
#include "teacher.h"

int main()
{
    Teacher teacher;
    //teacher.output();
    //teacher.first_name = "Teach";
    //std::cout << teacher << std::endl;

    // Input 
    std::cin >> teacher;
    // Output 
    std::cout << teacher << std::endl;

}
/*
After:

User Created 
Teacher Created 

NOTE: When create Teacher instance, it creates User intances first, then it will create Teacher instance *************
NOTE: Teacher is a part of User, so we need to know poly
NOTE: Teacher is considered as User
*/