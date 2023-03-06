#include <iostream>
#include <cstdint>

int main()
{
    std::uint32_t max_number_of_attemps = 3;

    std::cout << "Welcome to my Guessing-Game!" << std::endl;
    std::cout << "You have to guess the correct number between [0, 10]!" << std::endl;

    for (std::uint32_t current_number_of_attempts = 0; current_number_of_attempts < max_number_of_attemps; current_number_of_attempts++)
    {
        std::uint32_t number;
        std::cout << "Pls enter your guess: ";
        std::cin >> number;

        if (number >= 0 && number <= 10)
        {
            if(number == 4)
            {
                std::cout << "You won!" << std::endl;
            }
            else if (number == 2)
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
    }

    return 0;
}
