#include <iostream>

int main(void)
{
    int Number;

    std::cout << "Please enter a postive number : ";
    std::cin >> Number;

    while (Number < 0) // while loop is very useful to parsing purposes
    {
        std::cout << "Wrong Number, Please enter a non negative number : ";
        std::cin >> Number;
    }

    std::cout << "Your Postive number is : " << Number << std::endl;
    return (0);
}
