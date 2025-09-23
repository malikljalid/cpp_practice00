#include <iostream>

int main(void)
{
    int     Pennies, Nickels, Dimes, Quarters, Dollars;
    int     TotalPennies;
    float   TotalDollars;

    std::cout << "Please Enter Pennies : ";
    std::cin >> Pennies;
    std::cout << "Please Enter Nickels : ";
    std::cin >> Nickels;
    std::cout << "Please Enter Dimes : ";
    std::cin >> Dimes;
    std::cout << "Please Enter Quarters : ";
    std::cin >> Quarters;
    std::cout << "Please Enter Dollars : ";
    std::cin >> Dollars;

    TotalPennies = Pennies + Nickels * 5 + Dimes * 10 + Quarters * 25 + Dollars * 100;
    TotalDollars = TotalPennies / 100;
    std::cout << "Total amount in Pennies : " << TotalPennies << " Penny\n";
    std::cout << "Total amount in Dollars : " << TotalDollars << " Dollar\n";
    return (0);
}
