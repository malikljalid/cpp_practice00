#include <iostream>

struct stClass
{
    unsigned short Marks[3];
    unsigned short Average;
};

double getClassAverage(stClass Class)
{
    return ((Class.Marks[0] + Class.Marks[1] + Class.Marks[2]) / 3);
}

void readClassMarks(stClass &Class)
{
    std::cout << "Please enter Mark 1 : ";
    std::cin >> Class.Marks[0];

    std::cout << "Please enter Mark 2 : ";
    std::cin >> Class.Marks[1];

    std::cout << "Please enter Mark 3 : ";
    std::cin >> Class.Marks[1];

    Class.Average = getClassAverage(Class);
}

void showClassAverage(stClass Class)
{
    if (Class.Average >= 50)
    {
        std::cout << "Class Result : PASS\n";
    }
    else
    {
        std::cout << "Class Result : FAIL\n";
    }
}

int main(void)
{
    stClass Class;

    readClassMarks(Class);
    showClassAverage(Class);

    return (0);
}
