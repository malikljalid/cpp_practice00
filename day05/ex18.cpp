#include <iostream>
#include <cmath>

float circleArea(int r)
{
    const float PI = 3.14;

    return (r*r * PI);
}

int main(void)
{
    int R;

    std::cout << "Please enter R : ";
    std::cin >> R;

    std::cout << "Cirle Area = " << circleArea(R) << std::endl;
    return (0);
}
