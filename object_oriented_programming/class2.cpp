#include <iostream>
#include <vector>

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
    return users.size() - 1; // the index we insert in new item, index = index of the last item
}

int main()
{
    User user;
    user.first_name = "Caleb";

    std::vector<User> users; // Create a vector users from User's instances
    //users.push_back(User()); // instantiate to the default state****************
    users.push_back(user);

    std::cout << users[0].first_name << std::endl;

    User user1, user2, user3;
    user1.first_name = "Sally";
    user1.last_name = "Swan";

    user2.first_name = "Jake";
    user2.last_name = "Johnson";

    user3.first_name = "Caleb";
    user3.last_name = "Curry";

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    User user4;
    user4.first_name = "Jake";
    user4.last_name = "Johnson";

    std::cout << add_user_if_not_exists(users, user4) << std::endl; // 2 : so it will not add new item
    // Because user[0] = "Caleb", user[1] = "Sally", user[2] = "Jake"

    // add new user do not exit in users vector.
    User user5;
    user5.first_name = "Jacob";
    user5.last_name = "Johnson";
    std::cout << add_user_if_not_exists(users, user5) << std::endl; // 4 : so we have add new item
    // Because users[0] = "Caleb", users[1] = "Sally", users[2] = "Jake", users[3] = "Caleb", users[4] = Jacob
}
