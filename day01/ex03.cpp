#include <iostream>

int main(void)
{
    std::string Name;
    std::string City;
    std::string Country;
    int Age;
    int MonthlySalary;
    int YearlySalary;
    char Gender;
    bool Maried;

    Name = "Zakaria Adriouche";
    City = "Casabalanca";
    Country = "Morocco";
    Age = 24;
    MonthlySalary = 6000;
    YearlySalary = 72000;
    Gender = 'M';
    Maried = false;

    std::cout << "**************************\n";
    std::cout << "Name : " << Name << '\n';
    std::cout << "Age : " << Age << '\n';
    std::cout << "City : " << City << '\n';
    std::cout << "Country : " << Country << '\n';
    std::cout << "MonthlySalary : " << MonthlySalary << " DH" << '\n';
    std::cout << "YearlySalary  : " << YearlySalary << " DH" << '\n';
    std::cout << "Gender : " << Gender << '\n';
    std::cout << "Maried : " << Maried << '\n';
    std::cout << "**************************\n";

    return (0);
}
