#include <iostream>

void readN(int &N)
{
    std::cout << "Please enter N : ";
    std::cin >> N;
}

int getSumOfEvenNumbersFrom1ToN(int N)
{
    int Sum = 0;

    for (int i = 1; i <= N ; i++)
    {
        if (i % 2 == 0)
        {
            Sum += i;
        }
    }
    return (Sum);
}

void printSumOfEvenNumbersFrom1ToN(int N, int Sum)
{
    std::cout << "Sum of EVEN Numbers from 1 to " << N << " is = " << Sum << std::endl;
}

int main(void)
{
    int N;

    readN(N);
    printSumOfEvenNumbersFrom1ToN(N, getSumOfEvenNumbersFrom1ToN(N));

    return (0);
}
