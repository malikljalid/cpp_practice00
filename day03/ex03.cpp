#include <iostream>
#include <cmath>

int main(void)
{
    int a, d;
    float Area;

    std::cout << "Please enter a : ";
    std::cin >> a;

    std::cout << "Please enter d :";
    std::cin >> d;

    Area = a * sqrt(pow(d, 2) - pow(a, 2));
    std::cout << "Area = " << Area << std::endl;
    return (0);
}
