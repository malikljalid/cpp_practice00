#include <iostream>

// continue : make us skip from an iteration to the next one within a loop

int main(void)
{
    for (int i = 0; i <= 5; i++)
    {
        if (i == 3)
        {
            continue ; // 3 won't be printed.. 
        }
        std::cout << i << std::endl;
    }
    return (0);
}
