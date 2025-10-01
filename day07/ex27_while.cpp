#include <iostream>

void readN(int &N)
{
    std::cout << "Please enter N : ";
    std::cin >> N;
}

void printFromNTo1(int N)
{
    int i = N;

    while (i >= 1)
    {
        std::cout << i << '\n';
        i--;
    }
}

int main(void)
{
    int N;

    readN(N);
    printFromNTo1(N);

    return (0);
}
