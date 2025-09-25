#include <iostream>

void showMyIdCard(void)
{
    std::cout << "Name    : Zakaria Adriouche\n";
    std::cout << "Age     : 24\n";
    std::cout << "Country : Morocco\n";
    std::cout << "City    : Casablanca\n";
    std::cout << std::endl;
}

void programmingAffirmations(void)
{
    std::cout << "I love programming!\n";
    std::cout << "I promise to be the best deveploper ever!\n";
    std::cout << "I know it will time to practice, but i will achieve my GOAL!\n";
    std::cout << "\nBest Regards,\nZakaria Adriouche.\n";
    std::cout << std::endl;
}

void printSquare(void)
{
    std::cout << "*******\n";
    std::cout << "*******\n";
    std::cout << "*******\n";
    std::cout << "*******\n";
    std::cout << std::endl;
}

int main(void)
{
    showMyIdCard();
    printSquare();
    programmingAffirmations();

    return (0);
}
