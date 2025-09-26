#include <iostream>

int DurationInSeconds(int Seconds, int Minutes, int Hours, int Days)
{
    return (Seconds + (Minutes * 60) + (Hours * 60 * 60) + (Days * 24 * 60 * 60));
}

int main(void)
{
    int Seconds, Minutes, Hours, Days;

    std::cout << "Please enter Seconds : ";
    std::cin >> Seconds;
    std::cout << "Please enter Minutes : ";
    std::cin >> Minutes;
    std::cout << "Please enter Hours : ";
    std::cin >> Hours;
    std::cout << "Please enter Days : ";
    std::cin >> Days;

    std::cout << "Total duration in Seconds : " << DurationInSeconds(Seconds, Minutes, Hours, Days) << std::endl;

    return (0);
}
