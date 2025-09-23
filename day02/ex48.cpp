#include <iostream>

int main(void)
{
    short int LoanAmount, MonthlyPayment;
    short int Months;

    std::cout << "Please enter Loan Amount : ";
    std::cin >> LoanAmount;
    std::cout << "How many months you want to pay this amount in : ";
    std::cin >> Months;

    MonthlyPayment = LoanAmount / Months;
    std::cout << "Your MonthlyPayment is " << MonthlyPayment << " Dollar/Month\n";

    return (0);
}
