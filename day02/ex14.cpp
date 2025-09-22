#include <iostream>

int main(void)
{
    int A;
    int B;
    int tmp;

    std::cout << "Please insert a number A : ";
    std::cin >> A;
    std::cout << "Please insert a number B : ";
    std::cin >> B;

    std::cout << "\nBefore : \n";
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
