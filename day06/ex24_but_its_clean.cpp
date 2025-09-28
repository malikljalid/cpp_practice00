#include <iostream>

struct stHuman
{
    unsigned short int Age;
};

void readHumanAge(stHuman &Human)
{
    std::cout << "Please enter your Age : ";
    std::cin >> Human.Age;
}

void checkHumanAge(stHuman Human)
{
    if (Human.Age >= 18 && Human.Age <= 45)
    {
        std::cout << "Your Age is VALID !!\n";
    }
    else
    {
        std::cout << "Your Age is NOT VALID !!\n";
    }
}

int main(void)
{
    stHuman Human;

    readHumanAge(Human);
    checkHumanAge(Human);

    return (0);
}
