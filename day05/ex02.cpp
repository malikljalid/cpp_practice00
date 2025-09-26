#include <iostream>
#include <string>

void whatsYourName(void)
{
    std::string Name;

    std::cout << "What's Your Name ? : ";
    getline(std::cin, Name);
    std::cout << "Your Name : " << Name << std::endl;
}

int main(void)
{
    whatsYourName();

    return (0);
}
