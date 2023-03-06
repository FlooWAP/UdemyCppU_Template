#include <iostream>
#include <cstdint>

// 1.) User-Input: integer number
// 2.) Compute if the number is a prime number
// 3.) Print out the result

// Prime Number: Only divisible by itself and 1 with a remainder of 0

int main()
{
    bool is_prime = true;

    std::uint32_t number_input;
    std::cout << "Insert a number: ";
    std::cin >> number_input;

    if (number_input == 0 || number_input == 1)
    {
        is_prime = false;
    }

    for (unsigned int i = 2; i < number_input; i++)
    {
        if(number_input % i == 0) //Wenn Rest 0 ergibt, ist Zahl nicht nur durch sich selbst teilbar!!
        {
            is_prime = false;
        }

    }

    std::cout << "The number " << number_input << " is a prime number? " << std::boolalpha << is_prime << std::endl;

    /*if ((number_input % number_input == 0) && (number_input % 1 == 0))
    {
        std::cout << number_input << " is a prime number!" << std::endl;
    }
    else
    {
        std::cout << number_input << " is not a prime number!" << std::endl;
    }*/

    return 0;
}
