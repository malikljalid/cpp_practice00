#include <iostream>
#include <cmath>

int main(void)
{
    int A = 9;
    int B = 2;


    std::cout << "sqrt(9) = " << sqrt(A) << '\n'; // first one : sqrt()
    std::cout << "sqrt(50) = " << sqrt(50) << '\n';

    std::cout << "9 ^ 2 = " << pow(A, B) << '\n'; // second one : pow()
    std::cout << "8 ^ 3 = " << pow(8, 3) << '\n';

    std::cout << "floor of 6.5 is : " << floor(6.5) << '\n'; // third one : floor()
    std::cout << "floor of 3.1 is : " << floor(3.1) << '\n';
    std::cout << "floor of 9.8 is : " << floor(9.8) << '\n';

    std::cout << "ceil of 6.5 is : " << ceil(6.5) << '\n';  // 4th one : ceil()
    std::cout << "ceil of 3.1 is : " << ceil(3.1) << '\n';
    std::cout << "ceil of 9.8 is : " << ceil(9.8) << '\n';

    std::cout << "round of 6.6 is : " << round(6.5) << '\n'; // 5th one : round()
    std::cout << "round of 6.6 is : " << round(6.5) << '\n';
    std::cout << "round of 6.6 is : " << round(6.5) << '\n';

    std::cout << "absulte value of -9 = " << abs(-9) << '\n'; // 6th one : abs(-9)
    std::cout << "absulte value of  4 = " << abs(-A) << '\n';
    std::cout << "absulte value of  2 = " << abs(2) << '\n';

    return (0);
}
