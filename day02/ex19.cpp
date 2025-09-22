#include <iostream>

int main(void)
{
    int D;
    int Area;
    const int PI = 3.14;

    std::cout << "Please enter D : ";
    std::cin >> D;

    Area = (PI * D * D) / 4;
    std::cout << "\nArea of circle = " << Area << std::endl;
    return (0);
}