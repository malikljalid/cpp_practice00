#include <iostream>

int main(void)
{
    std::cout << (12 >= 12) << '\n';
    std::cout << (12 > 7) << '\n';
    std::cout << (8 < 6) << '\n';
    std::cout << (8 == 8) << '\n';
    std::cout << (12 <= 12) << '\n';
    std::cout << (7 == 5) << '\n';
    std::cout << std::endl;

    std::cout << !(12 >= 12) << '\n';
    std::cout << !(12 < 7) << '\n';
    std::cout << !(8 < 6) << '\n';
    std::cout << !(8 == 8) << '\n';
    std::cout << !(12 <= 12) << '\n';
    std::cout << !(7 == 5) << '\n';
    std::cout << std::endl;

    std::cout << (1 && 1) << '\n';
    std::cout << (true && 0) << '\n';
    std::cout << (0 || 1) << '\n';
    std::cout << (0 && 0) << '\n';
    std::cout << !0 << '\n';
    std::cout << !(1 || 0) << '\n';
    std::cout << std::endl;

    std::cout << ((7 == 7) && (7 > 5)) << '\n';
    std::cout << ((7 == 7) && (7 < 5)) << '\n';
    std::cout << ((7 == 7) || (7 < 5)) << '\n';
    std::cout << ((7 < 7) || (7 > 5)) << '\n';
    std::cout << (!(7 == 7) && (7 > 5)) << '\n';
    std::cout << ((7 == 7) && !(7 < 5)) << '\n';
    std::cout << std::endl;

    return (0);
}
