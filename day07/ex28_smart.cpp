#include <iostream>

struct stInput
{
    int N;
    int Sum;
};

void readInput(stInput &Input)
{
    std::cout << "Please enter N : ";
    std::cin >> Input.N;
    Input.Sum = 0;
}

void  printSumOfOddNumberFrom1toN(stInput &Input)
{
    for (int i = 1; i <= Input.N ; i++)
    {
        if (i % 2 != 0)
        {
            Input.Sum += i;
        }
    }
    std::cout << "Sum of ODD Number from 1 to " << Input.N << " is = " << Input.Sum << std::endl;
}

int main(void)
{
    stInput Input;

    readInput(Input);
    printSumOfOddNumberFrom1toN(Input);

    return (0);
}
