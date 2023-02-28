#include <iostream>

//https://www.rapidtables.com/code/text/ascii-table.html

int main()
{
    char letter_a = 'A';

    std::cout << letter_a << std::endl;
    std::cout << (int)letter_a << std::endl;

    char letter_a2 = letter_a + 3;

    std::cout << letter_a2 << std::endl;
    std::cout << (int)letter_a2 << std::endl;


    return 0;
}
