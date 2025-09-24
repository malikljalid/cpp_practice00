#include <iostream>
#include <cmath>

int main(void)
{
    short int   Days, Hours, Minutes, Seconds;
    int         TotalSeconds;
    float       Remainder;
    int         intRemainder;

    const int SecondsPerDay = 60 * 60 * 24;
    const int SecondsPerHour = 60 * 60;
    const int SecondsPerMinute = 60;

    std::cout << "Please enter Total Seconds : ";
    std::cin >> TotalSeconds;

    Days = floor(TotalSeconds / SecondsPerDay);
    Remainder = TotalSeconds % SecondsPerDay;

    Hours = floor(Remainder / SecondsPerHour);
    intRemainder = round(Remainder);
    Remainder = intRemainder % SecondsPerHour;

    Minutes = floor(Remainder / SecondsPerMinute);
    intRemainder = round(Remainder);
    Seconds = intRemainder % SecondsPerMinute;

    std::cout << Days << ':' << Hours << ':' << Minutes << ':' << Seconds << '\n';
    return (0);
}
