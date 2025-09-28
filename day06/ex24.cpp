#include <iostream>

int main(void)
{
    int Age;

    std::cout << "Please enter your age : ";
    std::cin >> Age;

    if (Age >= 18 && Age <= 45)
    {
        std::cout << "VALID\n";
    }
    else
    {
        std::cout << "InValid\n";
    }

    return (0);
}
