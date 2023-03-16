#include <iostream>
#include <cstdint>

int main()
{
    int LEN_X = 10U;
    int START = 0U;
    int GOAL = 9U;
    char LEFT = 'a';
    char RIGHT = 'd';

    int player = START;
    char move;

    while (true)
    {
        if (player == GOAL)
        {
            break;
        }

        for (int i = START; i < LEN_X; i++)
        {
            if (i == player)
            {
                std::cout << 'P';
            }
            else if (i == GOAL || i == START)
            {
                std::cout << '|';
            }
            else
            {
            std::cout << '.';
            }
        }


        std::cin >> move;

        if(LEFT == move && player > 0)
        {
            std::cout << "The player moved to the left\n";
            player--;
        }
        else if (RIGHT == move && player < (LEN_X -1))
        {
            std::cout << "The player moved to the right\n";
            player++;
        }
        else
        {
            std::cout << "Unrecognized move!\n";
        }

    }

    return 0;
}
