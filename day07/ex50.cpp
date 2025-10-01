#include <iostream>

struct stUser
{
    const unsigned short int  Balance = 7500;
    const unsigned short int  PIN     = 1234;
    unsigned short int        ATM;
};

void readUserPIN(stUser &User)
{
    std::cout << "Please enter your PIN : ";
    std::cin >> User.ATM;
}

void checkUserBalance(stUser User)
{
    if (User.ATM == User.PIN)
    {
        std::cout << "Your Balance is : " << User.Balance << std::endl;
    }
    else
    {
        std::cout << "Wrong PIN!\n";
    }
}

void userLogin(stUser &User)
{
    int Counter = 0;

    while (Counter < 3 && User.ATM != User.PIN)
    {
        std::cout << "\n--- Attemp N" << Counter + 1 << " : ---\n";
        readUserPIN(User);
        checkUserBalance(User);
        Counter++;
    }
    if (Counter >= 3)
    {
        std::cout << "\nCard is Locked !!" << std::endl;
    }
}

int main(void)
{
    stUser User;

    userLogin(User);

    return (0);
}
