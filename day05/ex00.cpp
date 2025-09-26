#include <iostream>

void addTwoNumbers(void)
{
    int Number1;
    int Number2;

    std::cout << "Please enter Number1 :";
    std::cin >> Number1;

    std::cout << "Please enter Number2 :";
    std::cin >> Number2;

    std::cout << "************************\n";
    std::cout << Number1 + Number2 << std::endl;
}

int _addTwoNumbers(void)
{
    int Number1;
    int Number2;
    
    std::cout << "Please enter Number1 :";
    std::cin >> Number1;

    std::cout << "Please enter Number2 :";
    std::cin >> Number2;

    std::cout << "************************\n";
    return (Number1 + Number2);
}

int main(void)
{
    addTwoNumbers();
    std::cout << _addTwoNumbers() << std::endl;

    return (0);
}
