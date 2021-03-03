#include <iostream>
/*
access modifier : công cụ sửa đổi truy cập
*/
struct User // User in capital letter
{
    // data member in struct is Public (by default)
    std::string first_name;
    std::string last_name;
    std::string get_status() // use Public methods access to private data member.
    {
        return status;
    }
    private:
        std::string status = "Gold"; // Default value for Private data member in struct
};

int main()
{
    User me; // intances in lower case
    me.first_name = "Caleb";
    me.last_name = "Curry";
    // me.status = "Gold"; /s/ ERROR: User::status’ is private within this context

    std::cout << "First name: " << me.first_name << std::endl;
    std::cout << "Status: " << me.get_status() << std::endl;
    /*
    $ ./a.out
    First name: Caleb
    Status: Gold
    */

    return 0;
}