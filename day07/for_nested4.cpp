#include <iostream>

enum enASCII { A = 65, Z = 90 };

int main(void)
{
    for (int i = A; i <= Z; i++)
    {
        for (int j = A; j <= Z; j++)
        {
            std::cout << char (i) << char(j) << std::endl;
        }
    }
    return (0);
}
