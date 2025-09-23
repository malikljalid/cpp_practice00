#include <iostream>

int main(void)
{
    bool A, B;

    A = true;
    B = false;

    std::cout << (A && B) << '\n';
    std::cout << (A || B) << '\n';
    std::cout << !(A && B) << '\n';
    std::cout << !(A || B) << '\n';
    std::cout << !A << '\n';
    std::cout << !B << '\n';

    return (0);
}