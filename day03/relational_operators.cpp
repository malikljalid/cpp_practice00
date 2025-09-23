#include <iostream>

int main(void)
{
    int A;
    int B;

    A = 13;
    B = 20;

    std::cout << A << " == " << B << " ? --> " << (A == B) << '\n';
    std::cout << A << " != " << B << " ? --> " << (A != B) << '\n';
    std::cout << A << "  > " << B << " ? --> " << (A  > B) << '\n';
    std::cout << A << "  < " << B << " ? --> " << (A  < B) << '\n';
    std::cout << A << " >= " << B << " ? --> " << (A >= B) << '\n';
    std::cout << A << " <= " << B << " ? --> " << (A <= B) << '\n';

    return (0);
}
