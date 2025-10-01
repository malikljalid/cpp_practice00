#include <iostream>

void printAlphabete(void)
{
    int ASCII = 65;

    while (ASCII <= 90)
    {
        std::cout << char(ASCII) << std::endl;
        ASCII++;
    }
}

int main(void)
{
    printAlphabete();

    return (0);
}
