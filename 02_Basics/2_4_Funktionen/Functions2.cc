#include <iostream>

int user_input()
{
    int number = 0;
    std::cout << "Pls enter a number: ";
    std::cin >> number;

    return number;
}

bool is_even(int number)
{
     if (number % 2 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int user_number = user_input();
    std::cout << user_number << '\n';

    bool result = is_even(user_number);
    std::cout << "Is Even? " << std::boolalpha << result << '\n';

    return 0;
}
