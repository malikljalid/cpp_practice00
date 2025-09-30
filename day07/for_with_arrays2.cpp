#include <iostream>

struct stPersonalInfo
{
    std::string FirstName;
    std::string LastName;
    std::string Phone;
    int         Age;
};

struct stPersonsInfo
{
    stPersonalInfo Person[100];
    short int      Length;
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

void readPersonsInfo(stPersonsInfo &Persons)
{
    std::cout << "How many People you wanna store info : ";
    std::cin >> Persons.Length;

    std::cout << std::endl;
    for (int i = 0; i < Persons.Length; i++)
    {
        std::cout << "Person " << i << " :\n";
        std::cout << "---------\n";
        readPersonalInfo(Persons.Person[i]);
    }
}

void printPersonsInfo(stPersonsInfo Persons)
{
    std::cout << "Persons List : \n";
    std::cout << "**************\n\n";
    for (int i = 0; i < Persons.Length; i++)
    {
        std::cout << "Person " << i << " :\n";
        std::cout << "---------\n";
        printPersonalInfo(Persons.Person[i]);
    }
}

int main(void)
{
    stPersonsInfo Persons;

    readPersonsInfo(Persons);
    printPersonsInfo(Persons);

    return (0);
}
