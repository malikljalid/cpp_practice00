#include <iostream>

struct stStudent
{
    unsigned short Mark;
};

void readStudent(stStudent &Student)
{
    std::cout << "Please enter Your Mark : ";
    std::cin >> Student.Mark;
}

void showResult(stStudent Student)
{
    if (Student.Mark >= 50)
    {
        std::cout << "Your Result : PASS\n";
    }
    else
    {
        std::cout << "Your Result : FAIL\n";
    }
}

int main(void)
{
    stStudent Student;

    readStudent(Student);
    showResult(Student);

    return (0);
}
