#include <iostream>

enum enWeekDays { SUNDAY = 1, MONDAY, THEUSDAY, WEDENSDAY, THURSDAY, FRIDAY, SATURDAY };

struct stWeek
{
    std::string DayName;
    short int   DayNumber;
};

void readDayOfWeek(stWeek &Week)
{
    std::cout << "Please enter the Day : ";
    std::cin >> Week.DayNumber;
}

void getDayOfWeek(stWeek &Week)
{
    switch (Week.DayNumber)
    {
        case (SUNDAY) :
            Week.DayName = "Sunday";
            break;
        case (MONDAY) :
            Week.DayName = "Monday";
            break;
        case (THEUSDAY) :
            Week.DayName = "Theusday";
            break;
        case (WEDENSDAY) :
            Week.DayName = "Wedensday";
            break;
        case (THURSDAY) :
            Week.DayName = "Thursday";
            break;
        case (FRIDAY) :
            Week.DayName = "FRIDAY";
            break;
        case (SATURDAY) :
            Week.DayName = "Saturday";
            break;
    }
}

bool dayOfWeekIsValid(stWeek Week)
{
    if (1 <= Week.DayNumber && Week.DayNumber <= 7)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}

void printDayOfWeek(stWeek Week)
{
    if (dayOfWeekIsValid(Week) == true)
    {
        getDayOfWeek(Week);
        std::cout << Week.DayName << std::endl;
    }
    else
    {
        std::cout << "Invalid Day!" << std::endl;
    }
}

int main(void)
{
    stWeek Week;

    readDayOfWeek(Week);
    printDayOfWeek(Week);

    return (0);
}
