#include <iostream>

enum Color { RED, BLUE, GREEN, YELLOW };

int main(void)
{
    Color myFavoriteColor;

    myFavoriteColor = Color::RED;
    std::cout << "My favorite color is : " << myFavoriteColor << std::endl;
    return (0);
}
