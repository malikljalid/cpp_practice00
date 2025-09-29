#include <iostream>

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
    if (Week.DayNumber == 1)
    {
        Week.DayName = "Sunday";
    }
    else if (Week.DayNumber == 2)
    {
        Week.DayName = "Monday";
    }
    else if (Week.DayNumber == 3)
    {
        Week.DayName = "Tuesday";
    }
    else if (Week.DayNumber == 4)
    {
        Week.DayName = "Wednesday";
    }
    else if (Week.DayNumber == 5)
    {
        Week.DayName = "Thursday";
    }
    else if (Week.DayNumber == 6)
    {
        Week.DayName = "Saturday";
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
