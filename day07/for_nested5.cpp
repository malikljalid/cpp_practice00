#include <iostream>

int main(void)
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 10; j >= i; j--)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    return (0);
}
