#include <iostream>
#include <cmath>

float RectangleArea(int a, int d)
{
    float Area;

    Area = a * sqrt(d*d - a*a);
    return (Area);
}

int main(void)
{
    int A, D;

    std::cout << "Please enter A : ";
    std::cin >> A;

    std::cout << "Please enter D : ";
    std::cin >> D;

    std::cout << "Rectangle Area = " << RectangleArea(A, D) << std::endl;
    return (0);
}
