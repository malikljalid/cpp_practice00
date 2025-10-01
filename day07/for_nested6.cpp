#include <iostream>

int main(void)
{
    for (int i = 10; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << ' ';
        }
        std::cout << std::endl;
    }
    return (0);
}
