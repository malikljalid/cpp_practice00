#include <iostream>

int sumUntil99(void)
{
    int Sum     = 0;
    int Number  = 0;

    do
    {
        std::cout << "Please enter a number : ";
        std::cin >> Number;

        if (Number != 99)
        {
            Sum += Number;
        }
    }
    while (Number != 99);

    return (Sum);
}

int main(void)
{
    int Sum = sumUntil99();

    std::cout << "Sum = " << Sum << std::endl;
    return (0);
}
