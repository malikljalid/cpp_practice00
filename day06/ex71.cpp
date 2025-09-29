#include <iostream>

enum enCountry { MOROCCO = 1, EGYPT, ALGERIA, TUNSIA, NEGERIA, SOUTHAFRICA, UNKNOWN };

struct stCountry
{
    std::string Name;
    enCountry   ID;
};

void readCountryName(stCountry &Country)
{
    int ID;

    std::cout << "Please enter Your Country ID : ";
    std::cin >> ID;
    Country.ID = (enCountry)ID;
}

void setCountryName(stCountry &Country)
{
    switch (Country.ID)
    {
        case (MOROCCO) :
            Country.Name = "Morocco";
            break;
        case (ALGERIA) :
            Country.Name = "Algeria";
            break;
        case (TUNSIA)  :
            Country.Name = "Tunsia";
            break;
        case (EGYPT)   :
            Country.Name = "Egypt";
            break;
        case (NEGERIA) :
            Country.Name = "Negeria";
            break;
        case (SOUTHAFRICA) :
            Country.Name = "SoutAfrica";
            break;
        default :
            Country.ID = enCountry::UNKNOWN;
    }
}

void showCountryName(stCountry &Country)
{
    setCountryName(Country);
    if (Country.ID == enCountry::UNKNOWN)
    {
        std::cout << "Your country DOES NOT exist in the list!\n";
    }
    else
    {
        std::cout << "Your Country Name is : " << Country.Name << std::endl;
    }
}

void showCountriesMenu(void)
{
    std::cout << "*************** COUNTRIES MENU **************************************\n";
    std::cout << "Morocco-1 | Egypt-2 | Algeria-3 | Tunsia-4 | Negeria-5 | SoutAfrica-6\n";
    std::cout << "*********************************************************************\n";
}

int main(void)
{
    stCountry Country;

    showCountriesMenu();
    readCountryName(Country);
    showCountryName(Country);

    return (0);
}
