#include <iostream>
#include <vector>
/*
Static data member is associated to class not Object or instance of class
Static data member describe the class, rather than individual object in class. Ex: Population 
NOTE: Static member can access each other, but Non-Static member cannot access each other.
NOTE: Static member have private, public, and protected.
*/

class User 
{
    std::string status = "Gold"; 
    //static int user_count = 0; // ERROR: error: ISO C++ forbids in-class initialization of non-const static member ‘User::user_count’
    // SOLUTION: we must initialize the Static data member outside the class; ****************************
    static int user_count; 

    public:
        static int get_user_count()
        {
            //return first_name; // ERROR: error: invalid use of member ‘User::first_name’ in static member function
            return user_count;
        }

        std::string first_name;
        std::string last_name;

        std::string get_status() 
        {
            return status;
        }

        void set_status(std::string status) 
        {
            if(status == "Gold" || status == "Silver" || status == "Bronze")
            {
                this->status = status;
            }
            else
            {
                this->status = "Undetermined Status";
            }
        }

        
        User() 
        {
            std::cout << "Constructor\n";
            user_count++; // Increase the number of user in Class User
        }
        
        User(std::string first_name, std::string last_name) 
        {
            this->first_name = first_name;
            this->last_name = last_name;
            user_count++; // Increase the number of user in Class User
        }

        User(std::string first_name, std::string last_name, std::string status) 
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++; // Increase the number of user in Class User
        }

        ~User()
        {
            std::cout << "Destructor\n";
            user_count--; // Decrease the number of user in Class User
        }
};

int User::user_count = 0; // SOLUTION: for Non-Const Static Initialization 
/*
NOTE: Because class is structure of each object, when we declare the object, we initialize the memory for the object
Ex: User user;
status
first_name
last_name

However, Static Data Member is NOT belong to class, so it will NOT be initialize each time we create new instance or object
So, user_count ONLY USABLE when we define the some memory for it *************************************
So, that is why we need to define the Static Data Member outside the class
*/

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

    User user, user2, user3, user4, user5;
    std::cout << User::get_user_count() << std::endl; // 5: we have 5 user/instance
    //std::cout << User::user_count << std::endl; // ERROR: error: ‘int User::user_count’ is private within this context
    // Because user_count is Private in class.
    user.~User(); // Delete 1 instance in class 
    std::cout << User::get_user_count() << std::endl; // 4 : we have 4 user/instance


}