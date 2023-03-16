#include <iostream>

int user_input()
{
    int number = 0;
    std::cout << "Pls enter a number: ";
    std::cin >> number;

    return number;
}

int main()
{
    int n1 = user_input();
    std::cout << n1 << '\n';
    int n2 = user_input();
    std::cout << n2 << '\n';
    int n3 = user_input();
    std::cout << n3 << '\n';

    return 0;
}
