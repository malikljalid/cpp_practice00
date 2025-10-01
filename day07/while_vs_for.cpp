#include <iostream>

int main(void)
{
    int i = 0;

    std::cout << "while loop :\n";
    while (i < 10)
    {
        std::cout << i << std::endl;
        i++;
    }

    //this while loop above will do the exact same as for loop below
    std::cout << "for loop :\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << std::endl;
    }
    // the only difference is the use case
    // for loop : is better for when we already know how many times iterations
    // while loop : is better for when we don't know

    return (0);
}
