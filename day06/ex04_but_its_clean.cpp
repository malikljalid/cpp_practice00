#include <iostream>

struct stCandidat
{
    short int Age;
    bool      HasDriverLicense;
};

void readCandidat(stCandidat &Candidat)
{
    std::cout << "Please enter your age : ";
    std::cin >> Candidat.Age;

    std::cout << "Do you have a driver license ? (No -> 0 / Yes -> 1) : ";
    std::cin >> Candidat.HasDriverLicense;
}

void interviewCandidat(stCandidat Candidat)
{
    if (Candidat.Age > 21 && Candidat.HasDriverLicense == 1)
    {
        std::cout << "Welcome, You are HIRED!\n";
    }
    else
    {
        std::cout << "Unfortunately you are REJECTED, Good Luck!\n";
    }
}

int main(void)
{
    stCandidat Candidat;

    readCandidat(Candidat);
    interviewCandidat(Candidat);

    return (0);
}
