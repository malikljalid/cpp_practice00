#include <iostream>

void nonFunctionalSwapTwoNumbers(int N1, int N2)
{
    int tmp;

    tmp = N1;
    N1  = N2;
    N2  = tmp;
}

void functionalSwapTwoNumbers(int &N1, int &N2)
{
    int tmp;

    tmp = N1;
    N1  = N2;
    N2  = tmp;
}

void fancySwapTwoNumbers(int *N1, int *N2)
{
    int tmp;

    tmp  = *N1;
    *N1  = *N2;
    *N2  = tmp;
}

int main(void)
{
    int N1, N2;

    std::cout << "Please enter Number 1 : ";
    std::cin >> N1;

    std::cout << "Please enter Number 2 : ";
    std::cin >> N2;

    std::cout << "\nBefore : Number 1 = " << N1 << std::endl;
    std::cout << "Before : Number 2 = " << N2 << std::endl;

    nonFunctionalSwapTwoNumbers(N1, N2);
    std::cout << "\nAfter : Number 1 = " << N1 << std::endl;
    std::cout << "After : Number 2 = " << N2 << std::endl;

    functionalSwapTwoNumbers(N1, N2);
    std::cout << "\nAfter : Number 1 = " << N1 << std::endl;
    std::cout << "After : Number 2 = " << N2 << std::endl;

    fancySwapTwoNumbers(&N1, &N2);
    std::cout << "\nAfter : Number 1 = " << N1 << std::endl;
    std::cout << "After : Number 2 = " << N2 << std::endl;

    return (0);
}
