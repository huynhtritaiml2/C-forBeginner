#include <iostream>
#include <vector>
/* 
Operator Overloading cannot access Private Data Members, we can access it through Public function
so, we use Friend Function 
*/
class User 
{
    std::string status = "Gold"; 
    static int user_count; 

    public:
        static int get_user_count()
        {
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
            user_count++; 
        }
        
        User(std::string first_name, std::string last_name) 
        {
            this->first_name = first_name;
            this->last_name = last_name;
            user_count++; 
        }

        User(std::string first_name, std::string last_name, std::string status) 
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++; 
        }

        ~User()
        {
            user_count--; 
        }

        friend void output_status(User user); // Stupid Example :))
        // NOTE: friend function can access the private data member of the class; **************
        // NOTE: it is better to access the private data member through getter or setter.
        friend std::istream& operator >> (std::istream& input, User &user) ;
        friend std::ostream& operator << (std::ostream& output, const User user) ;
};
void output_status(User user)
{
    std::cout << user.status << std::endl;
}

int User::user_count = 0; 

std::ostream& operator << (std::ostream& output, const User user) 
{
    //output << "First name: " << user.first_name <<"\nLast name: " << user.last_name; 
    // NOTE: we can access Private Data Members now.
    output << "First name: " << user.first_name <<"\nLast name: " << user.last_name << "\nStatus: " << user.status; 
    return output;
}

std::istream& operator >> (std::istream& input, User &user) 
{
    //input >> user.first_name >> user.last_name; 
    // NOTE: we cannot access the private part. we must access Private Data Members throught public function.******************
    input >> user.first_name >> user.last_name >> user.status; 
    // NOTE: we can access Private Data Members now.
    return input;
}

int main()
{

    User user;
    // Stupid Example
    output_status(user); // Gold : default value


    user.first_name = "Caleb";
    user.last_name = "Curry";
    user.set_status("Gold");

    // Output
    std::cout << user << std::endl;

    // Input
    std::cin >> user;
    std::cout << user << std::endl;



}