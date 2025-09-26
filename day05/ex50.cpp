#include <iostream>

int GlobalNumber = 42;
int A = 1;

void function(void)
{
    int A = 1337;

    GlobalNumber++;
    std::cout << "inside function A = " << A << std::endl;
}

int main(void)
{
    int A = 20;

    std::cout << "Global A = " << ::A << std::endl;
    std::cout << "GlobalNumber = " << GlobalNumber << std::endl;

    function();
    std::cout << "GlobalNumber = " << GlobalNumber << std::endl;

    GlobalNumber = 6;
    std::cout << "GlobalNumber = " << GlobalNumber << std::endl;

    std::cout << "inside main A = " << A << std::endl;

    return (0);
}
