#include <iostream>

int main(void)
{
    int A;

    A = 1;
    while (true)
    {
        if (A == 5)
        {
            break;  // break : is useful to break loops or exit them when needed
        }
        std::cout << "A = " << A << std::endl;
        A++;
    }

    return (0);
}
