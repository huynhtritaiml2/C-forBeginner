#include <string>
#include <iostream>

int main()
{
    std::string sentence = "Hello my name is Caleb";
    for(int i = 0; i < sentence.size(); i++)
    {
        if(sentence[i] == 'C')
        {
            std::cout << sentence[i]; // Hello my name is C
            break;
        }
        else if(sentence[i] == 'o')
        {
            continue; // Hell my name is C
        }
        else
        {
            std::cout << sentence[i];
        }
    }
}