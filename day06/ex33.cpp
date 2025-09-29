#include <iostream>

struct stStudent
{
    unsigned short int Grade;
};

void readStudentGrade(stStudent &Student)
{
    std::cout << "Please enter your Grade : ";
    std::cin >> Student.Grade;
}

void checkStudentGrade(stStudent Student)
{
    if (Student.Grade >= 90)
    {
        std::cout << "Your Grade : A\n";
    }
    else if (Student.Grade >= 80)
    {
        std::cout << "Your Grade : B\n";
    }
    else if (Student.Grade >= 70)
    {
        std::cout << "Your Grade : C\n";
    }
    else if (Student.Grade >= 60)
    {
        std::cout << "Your Grade : D\n";
    }
    else if (Student.Grade >= 50)
    {
        std::cout << "Your Grade : E\n";
    }
    else
    {
        std::cout << "Your Grade : F\n";
    }
}

void printStudentGrade(stStudent Student)
{
    if (0 <= Student.Grade && Student.Grade <= 100)
    {
        checkStudentGrade(Student);
    }
    else
    {
        std::cout << "Invalide Grade!\n";
    }
}

int main(void)
{
    stStudent Student;

    readStudentGrade(Student);
    printStudentGrade(Student);

    return (0);
}
