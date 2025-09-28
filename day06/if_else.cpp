#include <iostream>

int main(void)
{
    int Number;

    std::cout << "Please enter a Number : ";
    std::cin >> Number;

    if (Number > 20)
    {
        std::cout << Number << " is greater than 20\n";
    }
    else
    {
        std::cout << Number << " is smaller than 20\n";
    }
    std::cout << "Thank you!\n"; // this line will be always exucted after if statement
    return (0);
}
