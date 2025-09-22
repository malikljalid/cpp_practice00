#include <iostream>

int main(void)
{
    int A;
    float Area; // in the previous exercice i made a mistake by setting this variable as int
    const float PI = 3.14; // same for this const variable too.. it has to be float in the previous exercice

    std::cout << "Please enter A :";
    std::cin >> A;

    Area = (PI * A * A) / 4;
    std::cout << "Circle Area Inscribed in a Square = " << Area << std::endl;
    
    return (0);
}