#include <iostream>
#include <cstdint>

int main()
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
        else
        {
            std::cout << "You lost!" << std::endl;
        }
    }
    else
    {
        std::cout << "You entered a invalid number!" << std::endl;
    }

    return 0;
}
