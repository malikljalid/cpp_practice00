#include <iostream>
#include <cmath>

int main(void)
{
    int a, b, c;
    float p;
    float alpha;
    float Area;
    const float PI = 3.14;

    std::cout << "Please enter a : ";
    std::cin >> a;
    std::cout << "Please enter b : ";
    std::cin >> b;
    std::cout << "Please enter c : ";
    std::cin >> c;

    p = (a + b + c) / 2;
    alpha = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    Area = PI * pow(alpha, 2);

    std::cout << "Circle Area = " << Area << std::endl;
    return (0);
}
