#include <iostream>

int main(void)
{
    int ATM;

    std::cout << "Please enter your PIN : ";
    std::cin >> ATM;

    if (ATM == 1234)
    {
        std::cout << "Balance : 7500\n";
    }
    else
    {
        std::cout << "Wrong PIN!\n";
    }

    return (0);
}
