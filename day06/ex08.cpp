#include <iostream>

int main(void)
{
    short int Mark;

    std::cout << "Please enter Your Mark : ";
    std::cin >> Mark;

    if (Mark >= 50)
    {
        std::cout << "Your Result : PASS\n";
    }
    else
    {
        std::cout << "Your Result : FAIL\n";
    }

    return (0);
}
