#include <iostream>

int addTwoNumbers(int Num1, int Num2)
{
    return (Num1 + Num2);
}

int main(void)
{
    int Num1;
    int Num2;

    std::cout << "Enter Number 1 : ";
    std::cin >> Num1;

    std::cout << "Enter Number 2 : ";
    std::cin >> Num2;

    std::cout << "The Sum of " << Num1 << " + " << Num2 << " = " << addTwoNumbers(Num1, Num2) << std::endl;
    std::cout << "The Sum of " << 6 << " + " << 1 << " = " << addTwoNumbers(6, 1) << std::endl;
    std::cout << "The Sum of " << 6 << " + " << Num2 << " = " << addTwoNumbers(6, Num2) << std::endl;

    return (0);
}

