#include <iostream>

void swapTwoNumbers(int N1, int N2)
{
    int tmp;

    std::cout << "Number 1 = " << N1 << std::endl;
    std::cout << "NUmber 2 = " << N2 << std::endl;

    tmp = N1;
    N1  = N2;
    N2  = tmp;

    std::cout << "Number 1 = " << N1 << std::endl;
    std::cout << "NUmber 2 = " << N2 << std::endl;
}

int main(void)
{
    int N1, N2;

    std::cout << "Please enter Number 1 : ";
    std::cin >> N1;

    std::cout << "Please enter Number 2 : ";
    std::cin >> N2;

    swapTwoNumbers(N1, N2);
    return (0);
}