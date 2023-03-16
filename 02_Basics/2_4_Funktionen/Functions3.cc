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
    return number % 2 == 0;
}

void print_boolean_value(bool value)
{
    std::cout << std::boolalpha << value;
}

int main()
{
    int user_number = user_input();
    std::cout << user_number << '\n';

    bool result = is_even(user_number);
    print_boolean_value(result);



    return 0;
}
