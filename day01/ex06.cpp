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

    std::cout << "What's your Name ? : ";
    std::cin >> Name;
    std::cout << std::endl;

    std::cout << "What's your Age ? : ";
    std::cin >> Age;
    std::cout << std::endl;

    std::cout << "What's your Country ? : ";
    std::cin >> Country;
    std::cout << std::endl;

    std::cout << "What's your City ? : ";
    std::cin >> City;
    std::cout << std::endl;

    std::cout << "What's your Monthly Salary ? : ";
    std::cin >> MonthlySalary;
    std::cout << std::endl;

    std::cout << "What's your Yearly Salary ? : ";
    std::cin >> YearlySalary;
    std::cout << std::endl;

    std::cout << "What's your Gender ? : ";
    std::cin >> Gender;
    std::cout << std::endl;

    std::cout << "Are you Maried ? (Yes-1 | No-0) : ";
    std::cin >> Maried;
    std::cout << std::endl;

    std::cout << "\n\n***********************\n";
    std::cout << "Name : " << Name << '\n';
    std::cout << "Age : " << Age << '\n';
    std::cout << "Country : " << Country << '\n';
    std::cout << "City : " << City << "\n";
    std::cout << "Monthly Salary : " << MonthlySalary << '\n';
    std::cout << "Yearly Salary : " << YearlySalary << '\n';
    std::cout << "Gender : " << Gender << '\n';
    std::cout << "Maried : " << Maried << '\n';
    std::cout << "***********************\n";

    return (0);
}
