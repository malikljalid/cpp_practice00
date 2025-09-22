#include <iostream>
#include <climits>
#include <cfloat>

int main(void)
{
    // the first tool is sizeof utility
    std::cout << "Size of INT datatype is : " << sizeof(int) << '\n';
    std::cout << "Size of Unsigned INT datatype is : " << sizeof(unsigned int) << '\n';
    std::cout << "Size of Short INT datatype is : " << sizeof(short int) << '\n';

    std::cout << "Size of DOUBLE datatype is : " << sizeof(double) << '\n';
    std::cout << "Size of Long DOUBLE datatype is : " << sizeof(long double) << '\n';

    std::cout << "Size of CHAR datatype is : " << sizeof(char) << '\n';
    std::cout << "Size of Unsigned CHAR datatype is : " << sizeof(unsigned char) << '\n';
    //sizeof() helps find the size of each data type
    
    //the second tool is ranges MACROS in the <climits> library
    std::cout << std::endl;
    std::cout << "INT Range --> [" << INT_MIN << ", " << INT_MAX << "]\n";
    std::cout << "Unsinged INT Range --> [" << 0 << ", " << UINT_MAX << "]\n";
    std::cout << "Short INT Range --> [" << SHRT_MIN << ", " << SHRT_MAX << "]\n";
    std::cout << "Long INT Range --> [" << LONG_MIN << ", " << LONG_MAX << "]\n";
    std::cout << "Long Long INT Range --> [" << LLONG_MIN << ", " << LLONG_MAX << "]\n";
    std::cout << "Unsigned Long Long INT Range --> [" << 0 << ", " << ULLONG_MAX << "]\n";

    std::cout << "DOUBLE Range --> [" << DBL_MIN << ", " << DBL_MAX << "]\n";
    std::cout << "Negative DOUBLE Range --> [" << -DBL_MIN << ", " << -DBL_MAX << "]\n";
    std::cout << "Long DOUBLE Range --> [" << __LDBL_MIN__ << ", " << __LDBL_MAX__ << "]\n";
    std::cout << "Long DOUBLE Range --> [" << LDBL_MIN_10_EXP << ", " << LDBL_MAX_10_EXP << "]\n";
    // Datatypes ranges MACROS are useful to keep the code clean and make it easy to remember them


    return (0);
}