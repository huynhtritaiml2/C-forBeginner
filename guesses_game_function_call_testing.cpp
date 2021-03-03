#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void save_score(int count)
{
    std::ifstream input("best_score.txt");
    
    if(input.is_open())
    {
        std::cout << "Unable to read file best_score\n";
        return;
    }

    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt"); // no append, overwrite the file
    if(output.is_open())
    {
        std::cout << "Unable to read file best_score\n";
        return;
    }
    
    if(count < best_score)
    {
        output << count;
    }
    else
    {
        output << best_score;
    }
}


void print_vector(std::vector<int> vector)
{
    for (int i = 0; i < vector.size() ; i++)
    {
        std::cout << vector[i] << '\t';
    }
    std::cout << '\n';
}

void play_game()
{
    std::vector<int> guesses; 
    int count = 0; // to keep track of the bast score

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number: ";

    while(true)
    {
        int guess; 
        std::cin >> guess;

        count = guesses.size(); // or count++;

        guesses.push_back(guess);

        if(guess == random)
        {
            std::cout << "You win! \n";
            break;
        }
        else if ( guess < random)
        {
            std::cout << "Too Low\n";
        }
        else
        {
            std::cout << "Too High\n";
        }
    }

    save_score(count);
    print_vector(guesses);
}

int main()
{
    srand(time(NULL));
    int choice;
    do 
    {
        std::cout << "0. Quit \n1. Play Game\n";
        std::cin >> choice;

        switch(choice)
        {
            case 0:
                std::cout << "Thanks for nothing\n";
                return 0;
            case 1:
                play_game();
                break;
        }
    } while(choice != 0);
}