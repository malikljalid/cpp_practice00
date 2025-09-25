#include <iostream>

enum enColor  { RED, GREEN = 13, BLUE };
enum enGender { MALE, FEMALE };
enum enStatus { SINGLE, MARRIED };

struct  stAdresse
{
    std::string Town;
    std::string StreetName;
    short int   StreetNumber;
};

struct  ContactInfo
{
    std::string Email;
    std::string Phone;
    std::string Facebook;
    stAdresse   Adresse;
};

struct  IdCard
{
    std::string          Name;
    std::string          Country;
    std::string          City;
    unsigned short int   Age;
    unsigned short int   MonthlySalary;
    unsigned short int   YearlySalary;
    enGender             Gender;
    enStatus             Maried;
    enColor              FavoriteColor;
    ContactInfo          Contacts;
};

int main(void)
{
    IdCard Zakaria;

    Zakaria.Name = "Zakaria Adriouche";
    Zakaria.Age  = 24;
    Zakaria.Country = "Morocco";
    Zakaria.City = "Casablanca";
    Zakaria.Gender = enGender::MALE;
    Zakaria.Maried = enStatus::SINGLE;
    Zakaria.FavoriteColor = enColor::RED;
    Zakaria.MonthlySalary = 10000;
    Zakaria.YearlySalary = 9999;
    Zakaria.Contacts.Adresse.Town = "Moulay Rachid";
    Zakaria.Contacts.Adresse.StreetName = "Hay My Rachid";
    Zakaria.Contacts.Adresse.StreetNumber = 5;
    Zakaria.Contacts.Email = "zachichigo20@gmail.com";
    Zakaria.Contacts.Phone = "+2121320061111";
    Zakaria.Contacts.Facebook = "Zacharia Drioush";

    std::cout << "--- ZAKARIA ID CARD --- \n";
    std::cout << Zakaria.Name << '\n';
    std::cout << Zakaria.Age << '\n';
    std::cout << Zakaria.Country << '\n';
    std::cout << Zakaria.City << '\n';
    std::cout << Zakaria.Gender << '\n';
    std::cout << Zakaria.Maried << '\n';
    std::cout << Zakaria.FavoriteColor << '\n';
    std::cout << Zakaria.MonthlySalary << '\n';
    std::cout << Zakaria.YearlySalary << '\n';
    std::cout << Zakaria.Contacts.Adresse.Town << '\n';
    std::cout << Zakaria.Contacts.Adresse.StreetName << '\n';
    std::cout << Zakaria.Contacts.Adresse.StreetNumber << '\n';
    std::cout << Zakaria.Contacts.Email << '\n';
    std::cout << Zakaria.Contacts.Phone << '\n';
    std::cout << Zakaria.Contacts.Facebook << '\n';
    std::cout << std::endl;

    return (0);
}
