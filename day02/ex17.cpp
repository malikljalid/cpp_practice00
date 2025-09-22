#include <iostream>

int main(void)
{
    int a, h;
    float Area;

    std::cout << "Inserte a : ";
    std::cin >> a;
    std::cout << "Inserte h : ";
    std::cin >> h;

    Area = (a / 2) * h;
    std::cout << "Area = " << Area << std::endl;
    return (0);
}
