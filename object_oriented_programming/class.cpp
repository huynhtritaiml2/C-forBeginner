#include <iostream>

/*
instantiation : create intances from class 
instantiate: khởi tạo 

NOTE: in other language: 
User user1 = new User();
in C++:
User user1; // NICER :)) *******************
--> Constructor

-- Overload Operator:

-- Static member:
ex: number of user in class, this data member do not belong to any instance

*/

class User // User in capital letter
{
    std::string status = "Gold"; // Default value for Private data member in structv

    public:
        // data member in class is Private (by default)
        std::string first_name;
        std::string last_name;
        std::string get_status() // use Public methods access to private data member.
        {
            return status;
        }
        
};

int main()
{
    User me; // intances in lower case
    me.first_name = "Caleb";
    me.last_name = "Curry";
    // me.status = "Gold"; /s/ ERROR: User::status’ is private within this context

    std::cout << "First name: " << me.first_name << std::endl;
    std::cout << "Status: " << me.get_status() << std::endl;

}
