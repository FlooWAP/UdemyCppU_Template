#include <iostream>

// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square
// 3.) Print out the values to the console

int main()
{
    float s_slength;
    float s_perimeter;
    float s_area;

    std::cout << "Pls enter the side length of the square: " << std::endl;
    std::cin >> s_slength;

    s_perimeter = s_slength * 4.0;
    s_area = s_slength * s_slength;

    std::cout << "The perimeter is: " << s_perimeter << std::endl;
    std::cout << "The area is: " << s_area << std::endl;




    return 0;
}
