#include <iostream>
#include <vector>
// Overloading Insertion and Extraction Operators
// std::cout << class_intance
/*
std::cout << class_intance
so, operator overloading must return std::ostream
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
            //std::cout << "Constructor\n";
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
            //std::cout << "Destructor\n";
            user_count--; 
        }
};
int User::user_count = 0; 
/*
output: is on the left of <<
user: is on the right of <<
std::ostream& : we take the reference, not copied string 
NOTE: in operator overloading, DO NOT try to put std::endl; into it.
because, we make it similar to other function.
*/
//std::ostream& operator << (std::ostream& output, User user)
std::ostream& operator << (std::ostream& output, const User user) // put const to prefix it :)) NICE******
{
    output << "First name: " << user.first_name <<"\nLast name: " << user.last_name; 
    return output;
}

//std::istream& operator >> (std::istream& input, User user) // logical ERROR: not work because we must pass user by reference :)), because we change user.data
// SOLUTION: ****************************************************************************************************
std::istream& operator >> (std::istream& input, User &user) 
{
    input >> user.first_name >> user.last_name; // we can do it, because input >>, separate each word by whitespace
    // NOTE: we cannot access the private part. we must access Private Data Members throught public function.******************
    return input;
}

int main()
{

    User user;
    //std::cout << User::get_user_count() << std::endl; 
    user.first_name = "Caleb";
    user.last_name = "Curry";
    user.set_status("Gold");
    std::cout << user << std::endl;

    std::cin >> user;
    std::cout << user << std::endl;


}