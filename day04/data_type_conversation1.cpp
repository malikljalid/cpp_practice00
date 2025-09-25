#include <iostream>

int main(void)
{
    double Num1 = 42.01;
    int    Num2;

    Num2 = Num1;  // implicit conversation from double to int
    std::cout << "Num2 = " << Num2 << '\n';

    Num2 = (int)Num1;   // explicit converstation from double to int in C old style
    std::cout << "Num2 = " << Num2 << '\n';

    Num2 = int(Num1);   // explicit converstation from double to int in C++ Manner
    std::cout << "Num2 = " << Num2 << '\n';
    return (0);
}
