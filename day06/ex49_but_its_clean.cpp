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

int main(void)
{
    stUser User;

    readUserPIN(User);
    checkUserBalance(User);

    return (0);
}
