#include <iostream>

int main(void)
{
    int A, B;

    A = 10;
    B = 20;

    A += B; // same as A = A + B;
    std::cout << "A = " << A << '\n';
    A -= B; // same as A = A - B;
    std::cout << "A = " << A << '\n';
    A *= B; // same as A = A * B;
    std::cout << "A = " << A << '\n';
    A /= B; // same as A = A / B;
    std::cout << "A = " << A << '\n';
    A %= B; // same as A = A % B;
    std::cout << "A = " << A << '\n';


    return (0);
}
