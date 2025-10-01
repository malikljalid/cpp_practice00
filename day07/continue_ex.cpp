#include <iostream>

int main(void)
{
    int Number;
    int Sum = 0;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Please enter a number : ";
        std::cin >> Number;
        if (Number > 50)
        {
            continue ; // skiping adding numbers larger than 50
        }
        Sum += Number;
    }
    std::cout << "Sum = " << Sum << std::endl;
    return (0);
}
