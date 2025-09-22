#include <iostream>

int main(void)
{
    int L;
    float Area;
    const float PI = 3.14;

    std::cout << "Please enter L : ";
    std::cin >> L;

    Area = (L * L) / (PI * 4);
    std::cout << "Circle Area Along the Circumference = " << Area << std::endl;

    return (0);
}
