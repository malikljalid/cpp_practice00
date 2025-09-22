#include <iostream>

int main(void)
{
    int A;
    int B;
    int tmp;

    A = 13;
    B = 20;

    std::cout << "Before : \n";
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;

    tmp = A;
    A = B;
    B = tmp;

    std::cout << "\nAfter : \n";
    std::cout << "A = " << A << std::endl;
    std::cout << "B = " << B << std::endl;

    return (0);
}
