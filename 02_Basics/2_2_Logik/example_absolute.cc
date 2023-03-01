#include <iostream>

// 1.) User-Input: integer number
// 2.) Compute the absolute value of an integer value
// 3.) Print out the absolute value

// x < 0: -x
// x >= 0: x

int main()
{
    int value_1 = 0;

    std::cout << "Enter the value of x: ";
    std::cin >> value_1;

    int abs_x = 0;

    if (value_1 < 0)
    {
        abs_x = -1 * value_1;
        std::cout << "Abs(" << value_1 << ") = " << abs_x << std::endl;
    }
    else
    {
        std::cout << "Abs(" << value_1 << ") = " << value_1 << std::endl;
    }


    return 0;
}
