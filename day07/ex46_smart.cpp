#include <iostream>

void printAlphabete(void)
{
    for (int ASCII = 65; ASCII <= 90; ASCII++)
    {
        std::cout << char(ASCII) << std::endl;
    }
}

int main(void)
{
    printAlphabete();

    return (0);
}
