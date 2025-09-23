#include <iostream>

int main(void)
{
    short int LoanAmount, MonthlyPayment;
    short int Months;

    std::cout << "Please enter Loan Amount : ";
    std::cin >> LoanAmount;
    std::cout << "Please enter Monthly Payment : ";
    std::cin >> MonthlyPayment;

    Months = LoanAmount / MonthlyPayment;
    std::cout << "You will pay the Amount in " << Months << " Months\n";

    return (0);
}