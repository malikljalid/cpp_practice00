#include <iostream>

enum Color      { RED, GREEN = 3, BLUE };
enum Week       { MONDAY = 1, THEUSDAY, WEDENSDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
enum Direction  { NORTH = 20 , SOUTH = 13 , EAST = 0 , WEST = 6 };
enum Gender     { MALE, FEMALE };
enum Status     { SINGLE, MARRIED };

int main(void)
{
    Color myColor = Color::BLUE;
    Week dayOfTheWeek = Week::THEUSDAY;
    Direction myWay = Direction::SOUTH;
    
    std::cout << "Hello, my favorite color is : " << myColor << '\n';
    std::cout << "I am available at " << dayOfTheWeek << " feel free to reach out to me!\n";
    std::cout << "I am going " << myWay << " Tonight\n";
    std::cout << "My Gender is " << Gender::MALE << ", and I am " << Status::SINGLE << std::endl;

    return (0);
}
