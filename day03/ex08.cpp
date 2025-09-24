#include <iostream>
#include <cmath>

int main(void)
{
    int A;
    int B;
    float Area;
    const float PI = 3.14;

    std::cout << "Please enter A : ";
    std::cin >> A;
    std::cout << "Please enter B : ";
    std::cin >> B;

    float alpha = (2*A - B);
    float beta  = (2*A + B);
    Area = PI * pow((B / 2), 2) * (alpha / beta);
    std::cout << "Circle Area = " << Area << std::endl;

    return (0);
}
