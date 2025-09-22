#include <iostream>

int main(void)
{
    int a, b;
    int Area;

    std::cout << "Please insert A :";
    std::cin >> a;
    std::cout << "Please insert b :";
    std::cin >> b;

    Area = a * b;
    std::cout << "Area = " << Area << std::endl;
    return (0);
}
