#include <iostream>

int main(void)
{
    int BillValue, TotalBill;

    std::cout << "Please enter BillValue : ";
    std::cin >> BillValue;

    TotalBill = BillValue * 1,1; // when we want to add perctange we multiply on 1+percntage not 0,+percntage
    TotalBill = TotalBill * 1.16;

    std::cout << "Your Total Bill : " << TotalBill << std::endl;
    return (0);
}
