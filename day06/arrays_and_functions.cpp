#include <iostream>

void readArray(int x[3])
{
    std::cout << "Please enter x1 : ";
    std::cin >> x[0];

    std::cout << "Please enter x2 : ";
    std::cin >> x[1];

    std::cout << "Please enter x3 : ";
    std::cin >> x[2];
}

void printArray(int x[3])
{
    std::cout << "x = { ";
    std::cout << x[0] << ", ";
    std::cout << x[1] << ", ";
    std::cout << x[2] << " }\n";
    std::cout << std::endl;
}

int main(void)
{
    int x[3];

    readArray(x);
    printArray(x);
}
