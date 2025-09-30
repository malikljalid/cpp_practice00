#include <iostream>

int main(void)
{
    int N;
    int factorial = 1;

    std::cout << "Please enter a number : ";
    std::cin >> N;

    for (int i = 1; i <= N; i++)
    {
        factorial *= i;
    }
    std::cout << N << "! = " << factorial << std::endl;
    return (0);
}
