#include <iostream>

struct stOperation
{
    int     Number1;
    int     Number2;
    int     Result;
    char    Type;
};

void readOperation(stOperation &Operation)
{
    std::cout << "Please enter Number 1 : ";
    std::cin >> Operation.Number1;

    std::cout << "Please enter Number 2 : ";
    std::cin >> Operation.Number2;

    std::cout << "Please enter Operation Type : ";
    std::cin >> Operation.Type;
}

bool OperationIsValid(stOperation Operation)
{
    if (Operation.Type != '+' && Operation.Type != '-' && 
        Operation.Type != '*' && Operation.Type != '/' &&
        Operation.Type != '%')
    {
        return (false);
    }
    else
    {
        return (true);
    }
}

void calculateOperationResult(stOperation &Operation)
{
    if (Operation.Type == '+')
    {
        Operation.Result = Operation.Number1 + Operation.Number2;
    }
    else if (Operation.Type == '-')
    {
        Operation.Result = Operation.Number1 - Operation.Number2;
    }
    else if (Operation.Type == '*')
    {
        Operation.Result = Operation.Number1 * Operation.Number2;
    }
    else if (Operation.Type == '/')
    {
        Operation.Result = Operation.Number1 / Operation.Number2;
    }
    else if (Operation.Type == '%')
    {
        Operation.Result = Operation.Number1 % Operation.Number2;
    }
}

void printOperationResult(stOperation Operation)
{
    std::cout << Operation.Number1 << ' ' << Operation.Type << ' ' << Operation.Number2 << " = " << Operation.Result << std::endl;
}

void treatOperation(stOperation Operation)
{
    if (OperationIsValid(Operation) == true)
    {
        calculateOperationResult(Operation);
        printOperationResult(Operation);
    }
    else
    {
        std::cout << "Invalide Operation!\n";
    }
}

int main(void)
{
    stOperation Operation;

    readOperation(Operation);
    treatOperation(Operation);

    return (0);
}
