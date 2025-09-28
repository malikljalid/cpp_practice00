#include <iostream>

int main(void)
{
    std::string Name = "Zakaria Adriouche";  // strings are arrays of characters in c++
    
    std::cout << Name[0] << ' ';   //prints z
    std::cout << Name[1] << ' ';   //prints a

    std::cout << Name[9] << ' ';   //prints d
    std::cout << Name[10] << ' ';  //prints r
    std::cout << Name[11] << ' ';  //prints i
    std::cout << Name[12] << ' ';  //prints o
    std::cout << Name[13] << ' ';  //prints u
    std::cout << Name[14] << '\n'; //prints c

    int arr[5] = {3, 7, 11, 13, 17};

    std::cout << arr[0] << ' ';    //prints first index element : 3
    std::cout << arr[1] << ' ';    //prints second index element: 7
    std::cout << arr[3] << '\n';   //prints 3rd index element   : 13

    double array[2];

    array[0] = 42.00;
    array[1] = 13.01;
    // array[2] = 38.99;  <-- ERROR : this is will produce wrong data
    
    std::cout << array[0] << '\n';
    std::cout << array[1] << '\n';
}
