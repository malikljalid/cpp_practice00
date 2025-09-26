#include <iostream>
#include <cmath>

float circleArea(int l)
{
    const float PI = 3.14;

    return (l*l / (PI * 4));
}

int main(void)
{
    int L;

    std::cout << "Please enter L : ";
    std::cin >> L;

    std::cout << "Circle Area = " << circleArea(L) << std::endl;
    return (0);
}
