#include <iostream>

int main(void)
{
    int A;
    short int B;  //short is half of the rang of int
    long int C;   //long have the same rang as int BTW
    long long D;  //long have the 8bytes size compared to int which only have 4.. making it extremly larger!
    signed int same_default_int;
    unsigned int only_postive_int;

    // in short in data we have 4 modifiers that we can modify the range of the foundamltal datatype int, double and char
    //we have 3 foundamental datatypes which can datatypes modifiers to
    //int 
    //double
    //char

    // the 4 type modifiers in C++ are the following :
    // signed
    // unsigned
    // short
    // long


    double distance;
    long double _distance; //long double has 12bytes larger than double which has only 8 and float which has only 4

    distance = 37E13; // 37E10 is the same as 37 x 10^13
    B = 200001; // Error!! could be ether give a wrong overflowed number or an Error!
    // because the its out of the rang of short int which is 32,767
    only_postive_int = -42; //Also, could be either cause an Error or an overflowed given number!

    std::cout << "Let's See the results :\n";
    std::cout << "distance = " << distance << '\n';
    std::cout << "B = " << B << '\n';
    std::cout << "only_postive_int = " << only_postive_int << '\n';
 
    //Note : by default all the datatypes are SIGNED
    //Note : always be CAREFUL and pay attention to choosing the righ datatype based on need and rang
    
    return (0);
}