#include <iostream>
#include <cmath>

float circleArea(int a, int b, int c)
{
    const float PI = 3.14;
    const float P  = (a + b + c) / 2;
    float       Alpha;
    float       Area;

    Alpha = (a * b * c) / (4 * sqrt(P * (P - a) * (P - b) * (P - c))) ; 
    Area  = PI * Alpha * Alpha;

    return (Area);
}

int main(void)
{
    int A, B, C;

    std::cout << "Please enter A : ";
    std::cin >> A;

    std::cout << "Please enter B : ";
    std::cin >> B;

    std::cout << "Please enter C : ";
    std::cin >> C;

    std::cout << "Circle Area = " << circleArea(A, B, C) << std::endl;
    return (0);
}
