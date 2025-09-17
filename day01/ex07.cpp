#include <iostream>

int main(void)
{
    int A;
    int B;
    int C;

    std::cout << "insert A : ";
    std::cin >> A;
    std::cout << std::endl;

    std::cout << "insert B : ";
    std::cin >> B;
    std::cout << std::endl;

    std::cout << "insert C : ";
    std::cin >> C;
    std::cout << std::endl;

    std::cout << A << '+' << '\n';
    std::cout << B << '+' << '\n';
    std::cout << C << '\n';
    std::cout << "___\n";
    std::cout << A + B + C << '\n';

    return (0);
}