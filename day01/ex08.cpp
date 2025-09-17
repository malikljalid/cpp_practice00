#include <iostream>

int main(void)
{
    int Age;

    std::cout << "Please what is your age ? : ";
    std::cin >> Age;
    std::cout << std::endl;

    std::cout << "Your Age is " << Age + 5 << " years old after 5 years!\n";
    return (0);
}