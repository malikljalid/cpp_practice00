#include <iostream>
#include <cmath>

int main(void)
{
    float Grades[3];
    float Average;

    std::cout << "Please enter Grade 1 : ";
    std::cin >> Grades[0];

    std::cout << "Please enter Grade 2 : ";
    std::cin >> Grades[1];

    std::cout << "Please enter Grade 3 : ";
    std::cin >> Grades[2];

    Average = (Grades[0] + Grades[1] + Grades[2]) / 3;
    std::cout << "\nThe average of Grades is " << round(Average) << std::endl;

    return (0);
}
