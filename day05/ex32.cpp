#include <iostream>
#include <cmath>

int powOf2(int N)
{
    return (N*N);
}

int powOf3(int N)
{
    return (N*N*N);
}

int powOf4(int N)
{
    return (N*N*N*N);
}

int main(void)
{
    int Number;

    std::cout << "Please enter a Number : ";
    std::cin >> Number;

    std::cout << Number << "^2 = " << powOf2(Number) << std::endl;
    std::cout << Number << "^3 = " << powOf3(Number) << std::endl;
    std::cout << Number << "^4 = " << powOf4(Number) << std::endl;
    return (0);
}