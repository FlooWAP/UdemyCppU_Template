#include <iostream>

#include "Game.h"

void game()
{
    bool has_won = false;

    std::cout << "Welcome to my Guessing-Game!" << std::endl;
    std::cout << "You have to guess the correct number between [0, 10]!" << std::endl;

    do
    {
        int number;
        std::cout << "Pls enter your guess: ";
        std::cin >> number;

        if ((number >= 0) && (number <= 10))
        {
            if(number == 4)
            {
                std::cout << "You won!" << std::endl;
                has_won = true;
            }
            else if (number % 2 == 0)
            {
                std::cout << "You won the wooden spoon" << std::endl;
            }
            else
            {
                std::cout << "You lost!" << std::endl;
            }
        }
        else
        {
            std::cout << "You entered a invalid number!" << std::endl;
        }
    }while (!has_won);

}
