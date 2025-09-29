#include <iostream>

struct stYear
{
    std::string MonthName;
    short int   MonthNumber;
};

void readMonthOfYear(stYear &Year)
{
    std::cout << "Please enter Month : ";
    std::cin >> Year.MonthNumber;
}

void getMonthOfYear(stYear &Year)
{
    if (Year.MonthNumber == 1)
    {
        Year.MonthName = "January";
    }
    else if (Year.MonthNumber == 2)
    {
        Year.MonthName = "February";
    }
    else if (Year.MonthNumber == 3)
    {
        Year.MonthName = "March";
    }
    else if (Year.MonthNumber == 4)
    {
        Year.MonthName = "April";
    }
    else if (Year.MonthNumber == 5)
    {
        Year.MonthName = "Mai";
    }
    else if (Year.MonthNumber == 6)
    {
        Year.MonthName = "June";
    }
    else if (Year.MonthNumber == 7)
    {
        Year.MonthName = "Jully";
    }
    else if (Year.MonthNumber == 8)
    {
        Year.MonthName = "August";
    }
    else if (Year.MonthNumber == 9)
    {
        Year.MonthName = "September";
    }
    else if (Year.MonthNumber == 10)
    {
        Year.MonthName = "October";
    }
    else if (Year.MonthNumber == 11)
    {
        Year.MonthName = "November";
    }
    else if (Year.MonthNumber == 12)
    {
        Year.MonthName = "December";
    }
}

bool monthOfYearIsValid(stYear Year)
{
    if (1 <= Year.MonthNumber && Year.MonthNumber <= 12)
    {
        return (true);
    }
    else
    {
        return (false);
    }
}

void printMonthOfYear(stYear Year)
{
    if (monthOfYearIsValid(Year) == true)
    {
        getMonthOfYear(Year);
        std::cout << "it's " << Year.MonthName << std::endl;
    }
    else
    {
        std::cout << "Invalid Month!" << std::endl;
    }
}

int main(void)
{
    stYear Year;

    readMonthOfYear(Year);
    printMonthOfYear(Year);

    return (0);
}
