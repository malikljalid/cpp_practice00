#include <iostream>

int readIntNumberInRange(int From, int To)
{
    int Number;

    std::cout << "Please enter a number between [" << From << " ~ " << To << "]: ";
    std::cin >> Number;

    while (Number < From || Number > To)
    {
        std::cout << "Wrong! the number your entered is out of range!!\n";
        std::cout << "Please enter a number between [" << From << " ~ " << To << "]: ";
        std::cin >> Number;
    }

    return (Number);
}

int main(void)
{
    int A = readIntNumberInRange(1, 100);
    std::cout << "Your Number is : " << A << std::endl;

    return (0);
}
