#include <iostream>

int main(void)
{
    int N;

    std::cout << "Please enter N : ";
    std::cin >> N;
    
    for (int i = 1; i <= N ; i++)
    {
        std::cout << i << '\n';
    }
    return (0);
}