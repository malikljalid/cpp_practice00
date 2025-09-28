#include <iostream>
#include <limits>

struct stPersonalInfo
{
    std::string FirstName;
    std::string LastName;
    std::string Phone;
    int         Age;
};


int main(void)
{
    stPersonalInfo Persons[2];

    Persons[0].FirstName = "Zakaria";
    Persons[0].LastName  = "Adriouche";
    Persons[0].Age       = 24;
    Persons[0].Phone     = "+21277993434";

    Persons[1].FirstName = "Joshwa";
    Persons[1].LastName  = "Hackerman";
    Persons[1].Age       = 20;
    Persons[1].Phone     = "+10232329999";

    return (0);
}
