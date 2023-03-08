#include <iostream>
#include <cstdint>

int main()
{
    std::int32_t sum = 0;

    do
    {
        std::cout << "\nCurrent Sum: " << sum << " Enter the next value: ";
        std::int32_t input;
        std::cin >> input;

        if (input < 0)
        {
            std::cout << "Canceled while loop!" << std::endl;
            break; //beendet die komplette Schleife
        }
        if (input < 1)
        {
            std::cout << "Loop Übersprungen!" << std::endl;
            continue; //beendet aktuellen durchlauf
        }

        sum += input;
    } while (true); // unendliche Schleife, break keywort für Abbruch benötigt

    return 0;
}
