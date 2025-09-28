#include <iostream>

int main(void)
{
    int     Mark1, Mark2, Mark3;
    float   Average;

    std::cout << "Please enter Mark 1 : ";
    std::cin >> Mark1;

    std::cout << "Please enter Mark 2 : ";
    std::cin >> Mark2;

    std::cout << "Please enter Mark 3 : ";
    std::cin >> Mark3;

    Average = (Mark1 + Mark2 + Mark3) / 3;

    if (Average >= 50)
    {
        std::cout << "Result : PASS\n";
    }
    else
    {
        std::cout << "Result : FAIL\n";
    }

    return (0);
}

