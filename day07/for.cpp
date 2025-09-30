#include <iostream>

int main(void)
{
    for (int i = 0; i < 3 ; i++)
    {
        std::cout << "Hello World\n";
    }
    // this will print Hello World 3 times
    // when i == 0
    // then i == 1
    // then i == 2
    // will stop in i == 3 because 3 < 3 is FALSE
    // the stop called loop exit
    return (0);
}
