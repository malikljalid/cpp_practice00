#include <iostream>

enum enCountry { MOROCCO = 10, EGYPT = 20, ALGERIA = 30, TUNSIA = 50, NEGERIA = 60, SOUTHAFRICA = 70 };

struct stCountry
{
    std::string Name;
    enCountry   ID;
};

void readCountryName(stCountry &Country)
{
    std::cout << "Please enter Your Country Name : ";
    std::cin >> Country.Name;
}

void setCountryID(stCountry &Country)
{
    if (Country.Name == "Morocco")
    {
        Country.ID = enCountry::MOROCCO;
    }
    else if (Country.Name == "Egypt")
    {
        Country.ID = enCountry::EGYPT;
    }
    else if (Country.Name == "Algeria")
    {
        Country.ID = enCountry::ALGERIA;
    }
    else if (Country.Name == "Tunsia")
    {
        Country.ID = enCountry::TUNSIA;
    }
    else if (Country.Name == "Negeria")
    {
        Country.ID = enCountry::NEGERIA;
    }
    else if (Country.Name == "SoutAfrica")
    {
        Country.ID = enCountry::SOUTHAFRICA;
    }
}

void showCountryID(stCountry &Country)
{
    setCountryID(Country);
    std::cout << "Your Country ID is : " << Country.ID << std::endl;
}

void showCountriesMenu(void)
{
    std::cout << "*************** COUNTRIES MENU **************************\n";
    std::cout << "Morocco | Egypt | Algeria | Tunsia | Negeria | SoutAfrica\n";
    std::cout << "*********************************************************\n";
}

int main(void)
{
    stCountry Country;

    showCountriesMenu();
    readCountryName(Country);
    showCountryID(Country);

    return (0);
}
