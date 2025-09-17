#include <iostream>

int main(void)
{
    int Num1 = 20;
    int Num2 = 6;

    int Sum = 0;

    std::cout << Num1 << '+' << Num2 << '=' << Num1 + Num2 << '\n';
    std::cout << "Or on another more boring way : \n";
    Sum = Num1 + Num2;
    std::cout << Num1 << '+' << Num2 << '=' << Sum << '\n';

    return (0);
}
