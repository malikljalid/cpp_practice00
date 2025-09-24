#include <iostream>
#include <cmath>

int main(void)
{
    int Number;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    std::cout << Number << "^2 = " << pow(Number, 2) << '\n';
    std::cout << Number << "^3 = " << pow(Number, 3) << '\n';
    std::cout << Number << "^4 = " << pow(Number, 4) << '\n';

    return (0);
}
