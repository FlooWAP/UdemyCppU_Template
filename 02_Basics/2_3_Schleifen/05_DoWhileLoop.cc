#include <iostream>
#include <cstdint>

int main()
{
    std::int32_t sum = 10U;

    do
    {
        std::cout << "\nCurrent Sum: " << sum << " Enter the next value: ";
        std::int32_t input = 0U;
        std::cin >> input;

        sum += input;
    } while (sum < 10);

    return 0;
}
