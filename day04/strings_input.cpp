#include <iostream>
#include <string>

int main(void)
{
    std::string Name;

    std::cout << "Please enter your name : ";
    //std::cin >> Name; // <--- this way of string input wont work

    //what we can do instead is to use the getline() function
    getline(std::cin, Name);

    std::cout << Name << std::endl;
    return (0);
}
