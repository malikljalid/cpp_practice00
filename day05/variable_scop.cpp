#include <iostream>

int x = 6;

void function(void)
{
    int x = 13;

    std::cout << "inside function x = " << x << std::endl;
}

int main(void)
{
    int x = 20;

    std::cout << "Global x = " << ::x << std::endl;
    std::cout << "inside main x = " << x << std::endl;
    function();

    return (0);
}
