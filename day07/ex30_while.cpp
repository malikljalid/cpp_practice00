#include <iostream>

int factorial(int N)
{
    int i = 1;
    int factorial = 1;

    while (i <= N)
    {
        factorial *= i;
        i++;
    }

    return (factorial);
}

void readNumber(int &N)
{
    std::cout << "Please enter a number : ";
    std::cin >> N;
}

int main(void)
{
    int N;

    readNumber(N); // readNumber() is better than readN()
    std::cout << N << "! = " << factorial(N) << std::endl;
    return (0);
}
