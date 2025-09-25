#include <iostream>
#include <limits>

int main(void)
{
    char c;
    int nb;

    std::cout << "enter c : ";
    std::cin >> c;

    std::cout << "enter nb : ";
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> nb;

    std::cout << c << " " << nb << std::endl;
    return (0);
}
