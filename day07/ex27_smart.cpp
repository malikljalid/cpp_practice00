#include <iostream>

void readN(int &N)
{
    std::cout << "Please enter N : ";
    std::cin >> N;
}

void printFromNTo1(int N)
{
    for (int i = N; i >= 1 ; i--)
    {
        std::cout << i << '\n';
    }
}

int main(void)
{
    int N;

    readN(N);
    printFromNTo1(N);

    return (0);
}
