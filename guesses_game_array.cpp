#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

void print_array(int array[], int count)
{
    for (int i = 0; i < count ; i++)
    {
        std::cout << array[i] << '\t';
    }
    std::cout << '\n';
}

void play_game()
{
    int guesses[251]; // to store value from 0->250
    int guess_count = 0;

    int random = rand() % 251;
    std::cout << random << std::endl;
    std::cout << "Guess a number: ";

    while(true)
    {
        int guess; 
        std::cin >> guess;

        // Method 1: ***************** The Besst
        guesses[guess_count++] = guess;
        /*
        NOTE: guesses[++guess_count] = guess; 
        is 
        guess_count++; // or even ++guess_count;
        guesses[guess_count] = guess;
        */
        // Method 2: Longer
        /*
        guesses[guess_count] = guess;
        guess_count++;
        */


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
    print_array(guesses, guess_count);
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