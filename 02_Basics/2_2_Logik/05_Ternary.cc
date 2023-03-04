#include <iostream>

int main()
{
    int age1 = 28;
    int age2 = 56;

    // Standard If-Abfrage
    int older_age1;
    if (age1 > age2)
    {
        older_age1 = age1;
    }
    else
    {
        older_age1 = age2;
    }

    // 2. Ternary Operator
    // Als IfElse Ersatz möglich, da kürzer!
    //                BOOL EXPR  ? TRUE : FALSE
    int older_age2 = age1 > age2 ? age1 : age2;

    return 0;
}
