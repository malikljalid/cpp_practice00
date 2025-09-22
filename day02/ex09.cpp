#include <iostream>

int main(void)
{
    int A, B, C;

    std::cout << "Please insert the first number : ";
    std::cin >> A;
    std::cout << "Please insert the second number : ";
    std::cin >> B;
    std::cout << "Please insert the third number : ";
    std::cin >> C;

    std::cout << "The Sume of " << A << " + " << B << " + " << C << " = " << A + B + C << '\n';
    return (0);
}