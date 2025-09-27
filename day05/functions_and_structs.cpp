#include <iostream>
#include <limits>

struct stPersonalInfo
{
    std::string FirstName;
    std::string LastName;
    int         Age;
    int         Phone;
};

void readPersonalInfo(stPersonalInfo &Person)
{
    std::cout << "Please enter your First Name : ";
    std::cin >> Person.FirstName;

    std::cout << "Please enter your Last Name  : ";
    std::cin >> Person.LastName;

    std::cout << "Please enter your Age        : ";
    std::cin >> Person.Age;

    std::cout << "Please enter your Phone      : ";
    std::cin >> Person.Phone;

    std::cout << std::endl;
}

void printPersonalInfo(stPersonalInfo Person)
{
    std::cout << "Name  : " << Person.FirstName + ' ' + Person.LastName << '\n';
    std::cout << "Age   : " << Person.Age << '\n';
    std::cout << "Phone : " << Person.Phone << '\n';
    std::cout << std::endl;
}

int main(void)
{
    stPersonalInfo Zakaria;
    stPersonalInfo Andrew;

    readPersonalInfo(Zakaria);
    printPersonalInfo(Zakaria);

    readPersonalInfo(Andrew);
    printPersonalInfo(Andrew);

    return (0);
}
