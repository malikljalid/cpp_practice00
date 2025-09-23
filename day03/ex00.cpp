#include <iostream>

int main(void)
{
    int A;
    int B;

    std::cout << "Please enter a number A : ";
    std::cin >> A;
    std::cout << "Please enter a number B : ";
    std::cin >> B;

    std::cout << A << " == " << B << " ? --> " << (A == B) << '\n';
    std::cout << A << " != " << B << " ? --> " << (A != B) << '\n';
    std::cout << A << "  > " << B << " ? --> " << (A  > B) << '\n';
    std::cout << A << "  < " << B << " ? --> " << (A  < B) << '\n';
    std::cout << A << " >= " << B << " ? --> " << (A >= B) << '\n';
    std::cout << A << " <= " << B << " ? --> " << (A <= B) << '\n';

    return (0);
}
