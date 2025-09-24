#include <iostream>
#include <cmath>

int main(void)
{
    int Number;
    int M;

    std::cout << "Please enter the number : ";
    std::cin >> Number;
    std::cout << "Please enter the power : ";
    std::cin >> M;

    std::cout << Number << '^' << M << " = " << pow(Number, M) << std::endl;
    return (0);
}
