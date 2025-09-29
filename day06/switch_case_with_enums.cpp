#include <iostream>

enum enColor { RED = 31, GREEN , YELLOW , BLUE };  // enums helps us, as code writers

// Function to reset the console color to default
void ResetConsoleColor()
{
    std::cout << "\033[0m";
}

// Function to set the console text and background color using ANSI escape codes
void SetConsoleColor(std::string msg, int foregroundColor, int backgroundColor)
{
    std::cout << "\033[" << foregroundColor << ";" << backgroundColor << "m";
    std::cout << msg;
    ResetConsoleColor();
    std::cout << std::endl;
}

void readColor(int &color)
{
    std::cout << "Please enter a color : ";
    std::cin >> color;
}

void changeScreenColor(int color)
{
    switch (color)
    {
        case (enColor::RED)    :
            SetConsoleColor("RED", RED, 1);
            break;
        case (enColor::BLUE)   :
            SetConsoleColor("BLUE", BLUE, 1);
            break;
        case (enColor::GREEN)  :
            SetConsoleColor("GREEN", GREEN, 1);
            break;
        case (enColor::YELLOW) :
            SetConsoleColor("YELLOW", YELLOW, 1);
            break;
        default :
            std::cout << "invalid color!\n";           
    }
}

void showColorMenu(void)
{
    std::cout << "*************** COLOR MENU *********************\n";
    std::cout << "RED : 31 | GREEN : 32 | YELLOW : 33 | BLUE : 34 \n";
    std::cout << "************************************************\n";
}

int main(void)
{
    int color;

    showColorMenu();
    readColor(color);
    changeScreenColor(color);

    return (0);
}
