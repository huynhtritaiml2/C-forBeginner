#include <iostream>
#include <vector>
/*
contructor == construction function
contructor method is created automatiacally for us with minimum feature
so, we need to define it, if we need have extra feature
NOTE: Default Constuctor is created automatically when we do not define any Constructor *******************
if we only define Cunstom constructor to force us to pass arguments when initiate 
NOTE: no return or return type in constructor compare to other methods 
NOTE: have the same name with class name 
NOTE: Default Constructor have no parameters
NOTE: Custom Constructor take parameters, and this is different constructor in class :))
NOTE: there are more than 1 constructor 
class User
{
    User()
    {

    }
    User(std::string first_name, std::string last_name)
    {

    }
}

Destructor:
~User()
{
    // CODE
}

*/

class User 
{
    std::string status = "Gold"; 

    public:
        std::string first_name;
        std::string last_name;
        std::string get_status() 
        {
            return status;
        }
        
        // Default Constructor is not created automatically, when we define our Constructor********************
        User() // Default Constructor with no parameter
        {
            std::cout << "Constructor\n";
        }
        
        User(std::string first_name, std::string last_name) // NOTE: parameter with the same name of data member in class
        {
            this->first_name = first_name;
            this->last_name = last_name;
        }

        User(std::string first_name, std::string last_name, std::string status) // NOTE: Constructor can access private members ****
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
        }

        // Destructor
        ~User()
        {
            std::cout << "Destructor\n";
        }
};

int add_user_if_not_exists(std::vector<User> &users, User user)
{
    for(int i = 0; i < users.size(); i++)
    {
        if(users[i].first_name == user.first_name && users[i].last_name == user.last_name)
        {
            return i;
        }
    }
    users.push_back(user);
    return users.size() - 1; 
}

int main()
{
    User user("Caleb", "Curry"); // it call Custom Constructor
    std::cout << user.first_name << std::endl; // Caleb

    User user1("Caleb", "Curry", "Silver"); // it call Custom Constructor
    std::cout << user1.get_status() << std::endl; // Silver


    User user2; // when we declare, it call Default Constructor
    user2.first_name = "Sally";
    user2.last_name = "Swan";
}
/*
tai@tai ~/Downloads/VietAI/c++/object_oriented_programming
$ ./a.out
Caleb
Silver
Constructor
Destructor
Destructor
Destructor
*/
