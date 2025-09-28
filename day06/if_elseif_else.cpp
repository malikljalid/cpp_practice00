#include <iostream>

int main(void)
{
    int time = 82;

    if (time < 10)
    {
        // it will enter here if condition1 is true
        std::cout << "Good Morning!\n";
    }
    else if (time < 14)
    {
        // it will enter here if condition1 is false and cond2 is true
        std::cout << "Good afternon!\n";
    }
    else
    {
        // it will enter here if nothing above was true
        std::cout << "Good Night!\n";
    }

    return (0);
}
