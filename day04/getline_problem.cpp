#include <iostream>
#include <limits>

int main(void)
{
    int Number;
    std::string Name;
    std::string Country;

    std::cout << "Please enter a number : ";
    std::cin >> Number;

    std::cout << "Please enter your Country : ";
    //std::cin.ignore(1, '\n'); // this solution will work for this case but not for all the cases!
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //this the better fix.. 
    getline(std::cin, Country);

    std::cout << "Please enter your Name : ";
    getline(std::cin, Name);

    std::cout << Number << " | " << Name << " | " << Country << " | " << '\n'; 
    return (0);
}