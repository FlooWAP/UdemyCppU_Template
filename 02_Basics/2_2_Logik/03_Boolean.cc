#include <iostream>
#include <cstdint>

// true: 1
// false: 0

/* !true => false */
/* !false => true */

int main()
{
    std::int32_t number = 4;

    bool check = ((number >= 0) && (number <= 10));
    //std::cout << "Checke: " << check << std::endl;
    //1 wird ausgegeben als true
    std::cout << "Checke: " << std::boolalpha << check << std::endl;
    //über "boolalpha" Ausgabe als true oder false

    std::int32_t number2 = 11;

    bool check2 = !((number2 >= 0) && (number2 <= 10));
    std::cout << "Checke: " << std::boolalpha << check2 << std::endl;
    //true weil !false
    
    return 0;
}
