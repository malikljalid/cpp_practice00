#include <iostream>

struct Car
{
    std::string Brand;
    std::string Model;
    int         Year;
};

int main(void)
{
    Car BMW;
    Car Nissan;

    BMW.Brand = "BMW";
    BMW.Model = "X7";
    BMW.Year = 2009;

    Nissan.Brand = "Nissan";
    Nissan.Model = "GTA";
    Nissan.Year = 2001;

    std::cout << "Car 1 : " << BMW.Brand << " | " << BMW.Model << " | " << BMW.Year << std::endl;
    std::cout << "Car 2 : " << Nissan.Brand << " | " << Nissan.Model << " | " << Nissan.Year << std::endl;

    return (0);
}