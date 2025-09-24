#include <iostream>
#include <cmath>

int main(void)
{
    int D;
    float Area;
    const float PI = 3.14;

    std::cout << "Please enter D : ";
    std::cin >> D;

    Area = (PI * pow(D, 2)) / 4;
    std::cout << "Area = " << Area << std::endl;
    
    return (0);
}