#include <iostream>

enum Color  { RED = 13, GREEN, BLUE };
enum eGender { MALE, FEMALE };
enum Status { SINGLE, MARRIED };

struct  tAdresse
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
};

struct  IdCard
{
    std::string Name;
    std::string Country;
    std::string City;
    unsigned short int   Age;
    unsigned short int   MonthlySalary;
    unsigned short int   YearlySalary;
    eGender        Gender;
    Status        Maried;
    tAdresse    Adresse;
    ContactInfo Contacts;
    Color       FavoriteColor;
};

int main(void)
{
    IdCard Zakaria;

    Zakaria.Name = "Zakaria Adriouche";
    Zakaria.Age  = 24;
    Zakaria.Country = "Morocco";
    Zakaria.City = "Casablanca";
    Zakaria.Gender = eGender::MALE;
    Zakaria.Maried = Status::SINGLE;
    Zakaria.FavoriteColor = Color::RED;
    Zakaria.MonthlySalary = 10000;
    Zakaria.YearlySalary = 9999;
    Zakaria.Adresse.Town = "Moulay Rachid";
    Zakaria.Adresse.StreetName = "Hay MyRachid";
    Zakaria.Adresse.StreetNumber = 5;
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
    std::cout << Zakaria.Adresse.Town << '\n';
    std::cout << Zakaria.Adresse.StreetName << '\n';
    std::cout << Zakaria.Adresse.StreetNumber << '\n';
    std::cout << Zakaria.Contacts.Email << '\n';
    std::cout << Zakaria.Contacts.Phone << '\n';
    std::cout << Zakaria.Contacts.Facebook << '\n';
    std::cout << std::endl;

    return (0);
}
