#include <iostream>

int main(void)
{
    int Number;
    char Character;

    std::cout << "Please can you insert a number : ";
    std::cin >> Number;

    std::cout << "Please can you insert a character : ";
    std::cin >> Character;

    std::cout << "Your Number is :" << Number << std::endl;
    std::cout << "Your character is : " << Character << std::endl;

    return (0);
}
