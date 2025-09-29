#include <iostream>

int main(void)
{
    int day = 4;

    switch (day)
    {
        case (1) :
            std::cout << "it's Sunday!\n";
            break;
        case (2) :
            std::cout << "it's Monday!\n";
            break;
        case (3) :
            std::cout << "it's Theusday!\n";
            break;
        case (4) :
            std::cout << "it's Wedensday!\n";
            break;
        case (5) :
            std::cout << "it's Thursday!\n";
            break;
        case (6) :
            std::cout << "it's Friday!\n";
            break;
        case (7) :
            std::cout << "it's Saturday!\n";
            break;
        default :
            std::cout << "invalid day!\n";
    }
    return (0);
}
