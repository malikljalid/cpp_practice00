#include <iostream>

int powerOfM(int number, int M)
{
    int power = 1;

    for (int i = 1; i <= M; i++)
    {
        power *= number;
    }
    return (power);
}

void readNumber(int &N, int &Pow)
{
    std::cout << "Enter a Number : ";
    std::cin >> N;

    std::cout << "Enter a power  : ";
    std::cin >> Pow;
}

int main(void)
{
    int Number;
    int Power;

    readNumber(Number, Power);
    std::cout << Number << "^ = " << powerOfM(Number, Power) << std::endl;

    return (0);
}
