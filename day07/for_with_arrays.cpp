#include <iostream>

void readArrayData(int arr[100], int &length)
{
    std::cout << "Please enter array size : ";
    std::cin >> length;

    for (int i = 0; i < length; i++)
    {
        std::cout << "arr[" << i <<  "] : ";
        std::cin >> arr[i];
    }
}

void printArrayData(int arr[100], int length)
{
    std::cout << "Array : [ ";
    for (int i = 0; i < length; i++)
    {
        std::cout << arr[i] << ' ';
    }
    std::cout << ']' << std::endl;
}

int  CalculateArraySum(int arr[100], int length)
{
    int Sum = 0;

    for (int i = 0; i < length; i++)
    {
        Sum += arr[i];
    }
    return (Sum);
}

float CalculateArrayAverage(int arr[100], int length)
{
    return (CalculateArraySum(arr, length) / length);
}

int main(void)
{
    int arr1[100];
    int length = 0;

    readArrayData(arr1, length);
    printArrayData(arr1, length);

    // std::cout << "Array Sum : " << CalculateArraySum(arr1, length) << std::endl;
    // std::cout << "Array Average : " << CalculateArrayAverage(arr1, length) << std::endl;

    // to avoid calling calculateArraySum twice we used a Sum help variable
    int Sum = CalculateArraySum(arr1, length);
    std::cout << "Array Sum : " << Sum << std::endl;
    std::cout << "Array Average : " << Sum / length << std::endl;

    return (0);
}
