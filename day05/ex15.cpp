#include <iostream>

int AreaOfRectangle(int a, int b)
{
    return (a * b);
}

int main(void)
{
    int A, B;

    std::cout << "Please enter A : ";
    std::cin >> A;

    std::cout << "Please enter B : ";
    std::cin >> B;

    std::cout << "Area of Rectangle = " << AreaOfRectangle(A, B) << std::endl;

    return (0);
}