#include <iostream>

int readIntNumberInRange(int From, int To)
{
    int Number;

    do
    {
        std::cout << "Please enter a number between [" << From << " ~ " << To << "]: ";
        std::cin >> Number;
    }
    while (Number < From || Number > To);
    //do while loop : is useful when you want to EXECUTE first.. then CHECK
    return (Number);
}

int main(void)
{
    int A = readIntNumberInRange(1, 100);
    std::cout << "Your Number is : " << A << std::endl;

    return (0);
}
