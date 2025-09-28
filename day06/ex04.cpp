#include <iostream>

int main(void)
{
    short int Age;
    bool      HasDriverLicense;

    std::cout << "Please enter your age : ";
    std::cin >> Age;

    std::cout << "Do you have a driver license ? : ";
    std::cin >> HasDriverLicense;

    if (Age > 21 && HasDriverLicense == 1)
    {
        std::cout << "Welcome, You are HIRED!\n";
    }
    else
    {
        std::cout << "Unfortunately you are REJECTED, Good Luck!\n";
    }
    return (0);
}
