#include <iostream>

int main(void)
{
    int N;
    int Sum = 0;

    std::cout << "Please enter N : ";
    std::cin >> N;
    
    for (int i = 1; i <= N ; i++)
    {
        if (i % 2 == 0)
        {
            Sum += i;
        }
    }
    std::cout << "Sum of EVEN Numbers from 1 to " << N << " is = " << Sum << std::endl;
    return (0);
}
