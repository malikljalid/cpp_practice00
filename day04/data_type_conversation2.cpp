#include <iostream>
#include <string> // holds fcts like stoi, stof and stod that are really useful to convert numerical strings to numbers

int main(void)
{
    std::string Number = "1337.4200";

    int         intNum;
    float       floatNum;
    double      doubleNum;

    intNum = std::stoi(Number);
    floatNum = std::stof(Number);
    doubleNum = std::stod(Number);

    std::cout << "int Number = " << intNum << '\n';
    std::cout << "float Number = " << floatNum << '\n';
    std::cout << "double Number = " << doubleNum << '\n';

    return (0);
}
