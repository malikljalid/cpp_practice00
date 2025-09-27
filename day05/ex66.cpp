#include <iostream>
#include <limits>

enum   enGender  { MALE, FEMALE };
enum   enStatus  { SINGLE, MARRIED };

struct stIdCard
{
    std::string          Name;
    std::string          Country;
    std::string          City;
    unsigned short int   Age;
    unsigned short int   MonthlySalary;
    unsigned short int   YearlySalary;         
    enGender             Gender;
    enStatus             Status;
};

void readIdCard(stIdCard &Person)
{
    bool Gender, Status;

    std::cout << "Please enter your Name : ";
    std::getline(std::cin, Person.Name);

    std::cout << "Please enter your Country : ";
    std::cin >> Person.Country;

    std::cout << "Please enter your City : ";
    std::cin >> Person.City;

    std::cout << "Please enter your Age : ";
    std::cin >> Person.Age;

    std::cout << "Please enter your Monthly Salary : ";
    std::cin >> Person.MonthlySalary;

    std::cout << "Please enter your Yearly Salary : ";
    std::cin >> Person.YearlySalary;

    std::cout << "Please enter your Gender : ";
    std::cin >> Gender;
    Person.Gender = (enGender)Gender;

    std::cout << "Please enter your Status : ";
    std::cin >> Status;
    Person.Status = (enStatus)Status;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void printIdCard(stIdCard Person)
{
    std::cout << "\n\n************************************\n";
    std::cout << "Name          : " << Person.Name << '\n';
    std::cout << "Age           : " << Person.Age << '\n';
    std::cout << "Country       : " << Person.Country << '\n';
    std::cout << "MonthlySalary : " << Person.MonthlySalary << '\n';
    std::cout << "YearlySalary  : " << Person.YearlySalary << '\n';
    std::cout << "Gender        : " << Person.Gender << '\n';
    std::cout << "Status        : " << Person.Status << '\n';
    std::cout << "************************************\n";
    std::cout << std::endl;
}

int main(void)
{
    stIdCard Zakaria;
    stIdCard Hamza;

    readIdCard(Zakaria);
    printIdCard(Zakaria);

    readIdCard(Hamza);
    printIdCard(Hamza);

    return (0);
}
