#include <iostream>

int main()
{
    //int Variablen zu float geändert, um Divison darstellen zu können
    float number1 = 10;
    float number2 = 3;
    float result = 0;

    result = number1 * number2;
    std::cout << "number1 * number2 = " << result << std::endl;

    result = number1 + number2;
    std::cout << "number1 + number2 = " << result << std::endl;

    result = number1 - number2;
    std::cout << "number1 - number2 = " << result << std::endl;

    result = number1 / number2;
    std::cout << "number1 / number2 = " << result << std::endl;
    //falsches Ergebnis, da Int. Keine Kommazahlen

    return 0;
}
