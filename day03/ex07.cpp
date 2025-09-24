#include <iostream>
#include <cmath>

int main(void)
{
    int A;
    float Area;
    const float PI = 3.14;

    std::cout << "Please enter A :";
    std::cin >> A;

    Area = pow(A, 2) / (4* PI);
    std::cout << "Area of circle = " << Area << std::endl;

    return (0);
}
