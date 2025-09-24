#include <iostream>
#include <cmath>

int main(void)
{
    int A;
    float Area;
    const float PI = 3.14;

    std::cout << "Please enter A : ";
    std::cin >> A;

    Area = PI * pow((A/2), 2);
    std::cout << "Area = " << Area << std::endl;
    
    return (0);
}