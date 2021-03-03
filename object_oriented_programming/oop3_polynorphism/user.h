
#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>

class User 
{
    std::string status = "Gold"; 
    static int user_count; 

    public:
        static int get_user_count();

        std::string first_name;
        std::string last_name;

        std::string get_status();

        void set_status(std::string status);

        
        User();
        
        User(std::string first_name, std::string last_name);

        User(std::string first_name, std::string last_name, std::string status) ;

        ~User();

        friend std::istream& operator >> (std::istream& input, User &user) ;
        friend std::ostream& operator << (std::ostream& output, const User user) ;

        
        virtual void output(); // We can override it from subclass, or children class 
        //void output(); // We can NOT override it from subclass, or children class 
};

#endif