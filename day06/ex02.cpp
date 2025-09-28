#include <iostream>
#include <limits>

struct stPersonalInfo
{
    std::string FirstName;
    std::string LastName;
    std::string Phone;
    int         Age;
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

void readPersonsInfo(stPersonalInfo Persons[2])
{
    readPersonalInfo(Persons[0]);
    readPersonalInfo(Persons[1]);
}

void printPersonsInfo(stPersonalInfo Persons[2])
{
    printPersonalInfo(Persons[0]);
    printPersonalInfo(Persons[1]);
}

int main(void)
{
    stPersonalInfo Persons[2];

    readPersonsInfo(Persons);
    printPersonsInfo(Persons);

    return (0);
}
