#include <iostream>
#include <cmath>

float circleArea(int a, int b)
{
    const float PI = 3.14;

    return (PI * pow(b/2, 2) * ((2*a - b) / (float)(2*a + b)));
}

int main(void)
{
    int A, B;

    std::cout << "Please enter A : ";
    std::cin >> A;

    std::cout << "Please enter B : ";
    std::cin >> B;

    std::cout << "Circle Area = " << circleArea(A, B) << std::endl;
    return (0);
}
