#include <iostream>

int main(void)
{
    const int FixedNumber = 42;

    //FixedNumber = 1000; --> Error here will occur if we executed this line
    //                        because we are trying to modify a READ-ONLY
    //                        variable

    std::cout << "Our Fixed Number --> " << FixedNumber << '\n';
    return (0);
}
