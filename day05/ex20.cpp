#include <iostream>
#include <cmath>

float circleArea(int A)
{
    const float PI = 3.14;

    return ((PI * A*A) / 4);
}

int main(void)
{
    int A;

    std::cout << "Please enter A : ";
    std::cin >> A;

    std::cout << "Circle Area = " << circleArea(A) << std::endl;

    return (0);
}
