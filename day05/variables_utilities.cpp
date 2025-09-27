#include <iostream>

void changeFunction(int Number)
{
    std::cout << "Passing by Value : Number Value = " << Number << std::endl;
    std::cout << "Passing by Value : Number Location = " << &Number << std::endl; // different adresse than the original variable adresse
    std::cout << std::endl;
}

void improvedChangeFunction(int *Number)
{
    std::cout << "Passing by Adresse : Number Value = " << *Number << std::endl;
    std::cout << "Passing by Adresse : Number Location = " << Number << std::endl; // same adresse as the passed variable adresse
    std::cout << std::endl;
}

void smartChangeFunction(int &Number)
{
    std::cout << "Passing by Reference : Number Value = " << Number << std::endl;
    std::cout << "Passing by Reference : Number Location = " << &Number << std::endl; // same adresse as the passed variable adresse
    std::cout << std::endl;
}

int main(void)
{
    int A = 13;

    std::cout << "A Value = " << A << std::endl;  // a variable have a name, value and an adresse in memory
    std::cout << "A Location = " << &A << std::endl; // we can have access for a variable value to change it, but for its adresse we can use & to access it but its READ_ONLY
    std::cout << std::endl;

    changeFunction(A);
    improvedChangeFunction(&A);
    smartChangeFunction(A);

    return (0);
}
