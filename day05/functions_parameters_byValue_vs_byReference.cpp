#include <iostream>

void changeFunction(int Number)
{
    Number = 1337;
    std::cout << "Number Changed inside normal function, did it?\n";
}

void improvedChangeFunction(int *Number)
{
    *Number = 1337;
    std::cout << "Number Changed inside improved function, did it?\n";
}

void smartChangeFunction(int &Number)
{
    Number = 101;
    std::cout << "Number Changed inside smart function, did it?\n";
}

int main(void)
{
    int A;

    A = 42;
    std::cout << "A = " << A << std::endl;

    changeFunction(A);
    std::cout << "Result : A = " << A << std::endl;

    improvedChangeFunction(&A);
    std::cout << "Result : A = " << A << std::endl;

    smartChangeFunction(A);
    std::cout << "Result : A = " << A << std::endl;

    return (0);
}
