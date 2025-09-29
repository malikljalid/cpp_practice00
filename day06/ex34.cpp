#include <iostream>

struct stBuyer
{
    unsigned int TotalSales;
    float        Percentage;
    float        Commission;
};

void readBuyerTotalSales(stBuyer &Buyer)
{
    std::cout << "Please enter your Total Sales : ";
    std::cin >> Buyer.TotalSales;
}

void getBuyerCommission(stBuyer Buyer)
{
    if (Buyer.TotalSales > 1000000)
    {
        Buyer.Percentage = 0.01;
    }
    else if (Buyer.TotalSales > 500000)
    {
        Buyer.Percentage = 0.02;
    }
    else if (Buyer.TotalSales > 100000)
    {
        Buyer.Percentage = 0.03;
    }
    else if (Buyer.TotalSales > 50000)
    {
        Buyer.Percentage = 0.05;
    }
    else
    {
        Buyer.Percentage = 0.00;
    }
    Buyer.Commission = Buyer.TotalSales * Buyer.Percentage;
    std::cout << "Your Commission : " << Buyer.Commission << std::endl;
}

int main(void)
{
    stBuyer Buyer;

    readBuyerTotalSales(Buyer);
    getBuyerCommission(Buyer);

    return (0);
}
