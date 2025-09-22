#include <iostream>

int main(void)
{
    int Number;
    int pow2;
    int pow3;
    int pow4;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    pow2 = Number * Number;
    pow3 = pow2 * Number;
    pow4 = pow3 * Number;

    std::cout << Number << "^2 = " << pow2 << '\n'; 
    std::cout << Number << "^3 = " << pow3 << '\n'; 
    std::cout << Number << "^4 = " << pow4 << '\n';
    return (0);
}
