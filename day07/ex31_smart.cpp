#include <iostream>

int main(void)
{
    int Number;
    int M;
    int Power = 1;

    std::cout << "Enter a Number : ";
    std::cin >> Number;

    std::cout << "Enter a power  : ";
    std::cin >> M;

    for (int i = 1; i <= M; i++)
    {
        Power *= Number;
    }

    std::cout << Number << "^ = " << Power << std::endl;

    return (0);
}
