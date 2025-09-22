#include <iostream>

int main(void)
{
    int A, B, C;
    int Average;

    std::cout << "Please insert the first number : ";
    std::cin >> A;
    std::cout << "Please insert the second number : ";
    std::cin >> B;
    std::cout << "Please insert the third number : ";
    std::cin >> C;

    Average = (A + B + C) / 3;
    std::cout << "The Average of " << A << ", " << B << " and " << C << " is : " << Average << '\n';
    return (0);
}
