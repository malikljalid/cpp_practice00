#include <iostream>

int main(void)
{
    for (int i = 1; i <= 10; i++)
    {
        std::cout << i << '\n';
        if (i == 7)
        {
            std::cout << "No Hello for ME\n\n";
            continue ;
        }
        std::cout << "Hello\n";
        std::cout << "Hello\n";
        std::cout << "Hello\n\n";
    }
    return (0);
}
