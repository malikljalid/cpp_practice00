#include <iostream>

int main(void)
{
    int Seconds, Minutes, Hours, Days;
    int DurationInSeconds;

    std::cout << "Please enter Seconds : ";
    std::cin >> Seconds;
    std::cout << "Please enter Minutes : ";
    std::cin >> Minutes;
    std::cout << "Please enter Hours : ";
    std::cin >> Hours;
    std::cout << "Please enter Days : ";
    std::cin >> Days;

    DurationInSeconds = Seconds + (Minutes * 60) + (Hours * 60 * 60) + (Days * 24 * 60 * 60);
    std::cout << "Total duration in Seconds : " << DurationInSeconds << std::endl;

    return (0);
}
