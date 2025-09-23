#include <iostream>

int main(void)
{
    int A = 10;
    int B;

    A = 10;
    B = A++;  // A++ : put the current value of A into B first.. then increment A to A+1
    std::cout << "A++ effect | A = " << A <<" |\n";
    std::cout << "A = " << A << " (B = A++)" << '\n';
    std::cout << "B = " << B << '\n';
    

    A = 10;
    B = ++A;  // ++A : increment A to A+1 first.. then store the current value of A into B
    std::cout << "++A effect | A = " << A <<" |\n";
    std::cout << "A = " << A << " (B = ++A)" << '\n';
    std::cout << "B = " << B << '\n';

    return (0);
}
