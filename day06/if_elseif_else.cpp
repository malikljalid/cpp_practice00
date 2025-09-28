#include <iostream>

int main(void)
{
    int time = 82;

    if (time < 10)
    {
        std::cout << "Good Morning!\n";
    }
    else if (time < 14)
    {
        std::cout << "Good afternon!\n";
    }
    else
    {
        std::cout << "Good Night!\n";
    }

    return (0);
}
