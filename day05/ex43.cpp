#include <iostream>
#include <cmath>

void formatDHMS(int TotalSeconds)
{
    const int SecondsPerDay     = 24 * 60 * 60;
    const int SecondsPerHour    = 60 * 60;
    const int SecondsPerMinute  = 60;
    
    int       Days;
    int       Hours;
    int       Minutes;
    int       Seconds;

    int       Remainder;

    Days      = TotalSeconds / SecondsPerDay;
    Remainder = TotalSeconds % SecondsPerDay;

    Hours     = Remainder / SecondsPerHour;
    Remainder = Remainder % SecondsPerHour;

    Minutes   = Remainder / SecondsPerMinute;
    Seconds   = Remainder % SecondsPerMinute;

    std::cout << Days << ':' << Hours << ':' << Minutes << ':' << Seconds << std::endl;

}

int main(void)
{
    int TotalSeconds;

    std::cout << "Please enter the duration in seconds : ";
    std::cin >> TotalSeconds;

    formatDHMS(TotalSeconds);

    return (0);
}
