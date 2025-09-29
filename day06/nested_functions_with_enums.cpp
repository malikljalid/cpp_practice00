#include <iostream>

enum enWeekDays { SUNDAY = 1, MONDAY, THEUSDAY, WEDENSDAY, THURSDAY, FRIDAY, SATURDAY };

struct stWeek
{
    enWeekDays  DayNumber;
};

void showDaysMenu(void)
{
    std::cout << "********************************** DAYS MENU ******************************************************\n";
    std::cout << "Sunday : 1 | Monday : 2 | Theusday : 3 | Wedenesday : 4 | Thursday : 5 | Friday : 6 | Saturday : 7 \n";
    std::cout << "***************************************************************************************************\n";
}

enWeekDays setDayOfWeek(void)
{
    short int DayNumber;

    std::cout << "Please enter the Day : ";
    std::cin >> DayNumber;

    return ((enWeekDays)DayNumber);
}

std::string getDayOfWeek(enWeekDays Day)
{
    switch (Day)
    {
        case (SUNDAY) :
            return ("Sunday");
        case (MONDAY) :
            return ("Monday");
        case (THEUSDAY) :
            return ("Theusday");
        case (WEDENSDAY) :
            return ("Wedensday");
        case (THURSDAY) :
            return ("Thursday");
        case (FRIDAY) :
            return ("FRIDAY");
        case (SATURDAY) :
            return ("Saturday");
        default :
            return ("Invalid day!\n");
    }
}

void printDayMessage(std::string Intro, std::string Day)
{
    std::cout << Intro + Day << std::endl;
}

int main(void)
{
    stWeek Week;

    showDaysMenu();
    printDayMessage("Hello, it's ", getDayOfWeek(setDayOfWeek()));

    return (0);
}
