#include <iostream>

void readN(int &N)
{
    std::cout << "Please enter N : ";
    std::cin >> N;
}

void printFrom1ToN(int N)
{
    int i = 1;
    while (i <= N)
    {
        std::cout << i << '\n';
        i++;
    }
}

int main(void)
{
    int N;

    readN(N);
    printFrom1ToN(N);

    return (0);
}
