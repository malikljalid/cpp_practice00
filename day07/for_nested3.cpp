#include <iostream>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return (0);
}
