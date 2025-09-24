#include <iostream>
#include <cmath>

int main(void)
{
    int r;
    float Area; //shit in the previous exercice this one had to be float!!
    const float PI = 3.14;

    std::cout << "Please enter r : ";
    std::cin >> r;

    Area = PI * pow(r, 2);
    std::cout << "Area = " << Area << std::endl;

    return (0);
}