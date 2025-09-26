#include <iostream>

void myProcedure(void)  // procedure a block of code without return
{
    std::cout << "Hello, from my procedure!\n";
}

std::string myFunction(void) //functions must return
{
    return ("Hello, from my function!\n");
}

int addTwo(void)
{
    int a = 13;
    int b = 20;

    return (a + b);
}


int main(void)
{
    myProcedure(); // for a procedure it is enough just to call it
    std::cout << myFunction();  // for functions you need to assign it to get the returned value

    std::cout << "a + b = " << addTwo() << std::endl;

    return (0);
}
