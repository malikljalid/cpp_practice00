#include <iostream>

int main(void)
{
    int TotalBid, CashPaid;
    int Reminder;

    std::cout << "Please enter TotalBid : ";
    std::cin >> TotalBid;
    std::cout << "Please enter CashPaid : ";
    std::cin >> CashPaid;

    Reminder = CashPaid - TotalBid;
    std::cout << "Your Reminder is :" << Reminder << '\n';

    return (0);
}
