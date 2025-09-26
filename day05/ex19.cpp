#include <iostream>
#include <cmath>

float circleArea(int d)
{
    float PI = 3.14;

    return (PI * (d*d / 4));
}

int main(void)
{
    int D;

    std::cout << "Please enter D : ";
    std::cin >> D;

    std::cout << "Area of Circle : " << circleArea(D) << std::endl;
    return (0);
}
