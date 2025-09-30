#include <iostream>

int main(void)
{
    int N;

    std::cout << "Please enter N : ";
    std::cin >> N;
    
    for (int i = N; i >= 1 ; i--)
    {
        std::cout << i << '\n';
    }
    return (0);
}
