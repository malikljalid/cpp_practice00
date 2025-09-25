#include <iostream>
#include <string>

int main(void)
{
    int     intNum = 42;
    double  dblNum = 42.01;

    std::string Number1;
    std::string Number2;

    Number1 = std::to_string(intNum); // string library holds also another useful fct to_string 
    Number2 = std::to_string(dblNum); // help to convert from numbers to numerical strings

    std::cout << Number1 << std::endl;
    std::cout << Number2 << std::endl;

    return (0);
}
