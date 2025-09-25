#include <iostream>

void    myFunction(void) // you write the function defention or block of code
{                        // in here in top or out of the main program
    std::cout << "Hello, from the first ever smooth function!" << std::endl;
}

void    anotherFunction(void)
{
    std::cout << "Hi, Nice to meet you!" << std::endl;
}

int     main(void)
{
    myFunction(); // you call the functio here in the main program
    myFunction();
    anotherFunction();

    return (0);
}
