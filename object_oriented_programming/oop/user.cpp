#include "user.h" // NOTE: Only need to include this 
/*
----Delete name of class: 
class User {}
----Delete all Data Members: 
std::string status = "Gold";
static int user_count; 
std::string first_name;
std::string last_name;
----Delete Public syntax
----Delete all Static, Friend syntax : because we have defined it in *.h

----Only keep method
----Prefix all method with class name
User::


*/

        int User::get_user_count()
        {
            return user_count;
        }



        std::string User::get_status() 
        {
            return status;
        }

        void User::set_status(std::string status) 
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

        
        User::User() 
        {
            user_count++; 
        }
        
        User::User(std::string first_name, std::string last_name) 
        {
            this->first_name = first_name;
            this->last_name = last_name;
            user_count++; 
        }

        User::User(std::string first_name, std::string last_name, std::string status) 
        {
            this->first_name = first_name;
            this->last_name = last_name;
            this->status = status;
            user_count++; 
        }

        User::~User()
        {
            user_count--; 
        }

        std::istream& operator >> (std::istream& input, User &user) ;
        std::ostream& operator << (std::ostream& output, const User user) ;


int User::user_count = 0; 

std::ostream& operator << (std::ostream& output, const User user) 
{
    output << "First name: " << user.first_name <<"\nLast name: " << user.last_name << "\nStatus: " << user.status; 
    return output;
}

std::istream& operator >> (std::istream& input, User &user) 
{
    input >> user.first_name >> user.last_name >> user.status; 
    return input;
}