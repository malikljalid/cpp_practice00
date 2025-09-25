#include <iostream>
#include <string>

int main(void)
{
    std::string string1;
    std::string string2;
    std::string string3;

    std::cout << "Please enter string 1 : ";
    getline(std::cin, string1);

    std::cout << "Please enter string 2 : ";
    getline(std::cin, string2);

    std::cout << "Please enter string 3 : ";
    getline(std::cin, string3);

    std::cout << "Length of string1 : " << string1.length() << '\n';
    std::cout << "Characters at 0,2,4,7 are : " << string1[0] << ' ' << string1[2] << ' ' << string1[4] << ' ' << string1[7] << '\n';
    std::cout << "Concatenating string2 and string3 : " << string2 + string3 << '\n';
    std::cout << stoi(string2) << " * " << stoi(string3) << " = " << stoi(string2) * stoi(string3) << '\n';
    return (0);
}
