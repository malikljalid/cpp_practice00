#include <iostream>

void readN(int &N)
{
    std::cout << "Please enter N : ";
    std::cin >> N;
}

void printFrom1ToN(int N)
{
    for (int i = 1; i <= N ; i++)
    {
        std::cout << i << '\n';
    }
}

int main(void)
{
    int N;

    readN(N);
    printFrom1ToN(N);

    return (0);
}
