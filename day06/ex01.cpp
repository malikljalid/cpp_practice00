#include <iostream>
#include <cmath>

double getAverage(float Grades[3])
{
    return (round((Grades[0] + Grades[1] + Grades[2]) / 3));
}

void readGrades(float Grades[3])
{
    std::cout << "Please enter Grade 1 : ";
    std::cin >> Grades[0];

    std::cout << "Please enter Grade 2 : ";
    std::cin >> Grades[1];

    std::cout << "Please enter Grade 3 : ";
    std::cin >> Grades[2];
}

void printAverageOfGrades(float Grades[3])
{
    std::cout << "\nThe average of Grades is " << getAverage(Grades) << std::endl;
}

int main(void)
{
    float Grades[3];

    readGrades(Grades);
    printAverageOfGrades(Grades);

    return (0);
}
