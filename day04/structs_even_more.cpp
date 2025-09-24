#include <iostream>

struct tOwner
{
    std::string FullName;
    std::string Phone;
};

struct Car
{
    std::string Brand;
    std::string Model;
    int         Year;
    tOwner       Owner;
};

int main(void)
{
    Car Toyota;

    Toyota.Brand = "Toyota";
    Toyota.Model = "Corolla";
    Toyota.Year = 2002;
    Toyota.Owner.FullName = "Mohamed-Habbib Adriouche";
    Toyota.Owner.Phone = "+212777003399";

    std::cout << "Car 1 : " << Toyota.Brand << " | " << Toyota.Model << " | " << Toyota.Year << " | " << Toyota.Owner.FullName << " | " << Toyota.Owner.Phone << std::endl;
    
    return (0);
}
