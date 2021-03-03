#include <iostream>
#include <vector>
/*
Driver : do not need to know about engine in the car, he only worry about steering wheel, pedal, blinker or Public interface to use the car 
Engine: we can turbo: tăng tốc, beefy: làm cho mạnh hơn, the detail of the car is hidden to Driver 

intricate: phức tạp 
internally : trong nội bộ 

encapsulation:
setter : method to set the private value
getter : method to get the private value 

Encapsulation is an Object Oriented Programming concept that binds (ràng buộc) together the data and functions that manipulate the data, 
and that keeps both safe from outside interference and misuse. Data encapsulation led to the important OOP concept of data hiding.

Data encapsulation is a mechanism of bundling the data, and the functions that use them and data abstraction is 
a mechanism of exposing only the interfaces and hiding the implementation details from the user.
*/

class User 
{
    // NOTE: the name of Private Data Member can prefix with double underscore _ _
    // NOTE: Protected Data Member can prefix with single underscore _
    std::string status = "Gold"; 

    public:
        // std::string status = "Gold"; // When private there is no special for getter and setter to return or get
        // So, we can make it Public
        std::string first_name;
        std::string last_name;

        std::string get_status() // getter function similar to normal methods in class
        {
            return status;
        }

        void set_status(std::string status) // setter function similar to normal methods in class
        {
            // NOTE: we can limit the value of this-status ***************
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
        }
        
        User(std::string first_name, std::string last_name) 
        {
            this->first_name = first_name;
            this->last_name = last_name;
        }

        User(std::string first_name, std::string last_name, std::string status) 
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

    User user("Caleb", "Curry", "Silver");
    user.set_status("Tacos"); // Undetermined Status
    std::cout << user.get_status() << std::endl; 
    

}