#include <iostream>

void findNumberInArray(int Array[10], int Size, int Number)
{
    for (int i = 0; i < Size; i++)
    {
        if (Array[i] == Number)
        {
            std::cout << Number << " postion in array : " << i << std::endl;
            break;
        }
    }
}

int main(void)
{
    const int size    = 10;
    int       arr[10] = { 13, 6, 20, 50, 93, 1, 42, 30, 12, 88 };

    findNumberInArray(arr, size, 20);

    return (0);
}
