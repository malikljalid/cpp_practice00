#include <iostream>

int main(void)
{
    int a, b;
    float Area;
    const float PI = 3.14;

    std::cout << "Please enter a : ";
    std::cin >> a;
    std::cout << "Please enter b : ";
    std::cin >> b;

    Area = ((PI * b * b) / 4) * ((2*a - b) / (2*a + b));
    std::cout << "Circle Area Inscribed in an Isosceles Triangle = " << Area << std::endl;
    return (0);
}
