#include <iostream>
#include <cmath>

int main(void)
{
    float Days, Hours, Minutes, Seconds;
    int iDays, iHours, iMinutes;
    int TotalSeconds;
    float Rest;

    std::cout << "Please enter the total duration in Seconds : ";
    std::cin >> TotalSeconds;

    Days = TotalSeconds / (float)(60 * 60 * 24);
    iDays = Days * 100;
    Rest = (iDays % 100) / (float)100;
    Days = Days - Rest;
    
    Hours = Rest * 24;
    iHours = Hours * 100;
    Rest = (iHours % 100) / (float)100;
    Hours = Hours - Rest;

    Minutes = Rest * 60;
    iMinutes = Minutes * 100;
    Rest = (iMinutes % 100) / (float)100;
    Minutes = Minutes - Rest;

    Seconds = Rest * 60;

    std::cout << round(Days) << ':' << round(Hours) << ':' << round(Minutes) << ':' << round(Seconds) << '\n';
    return (0);
}
