#include <iostream>

void printAlphabete(void)
{
    int ASCII = 65;

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
