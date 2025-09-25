#include <iostream>
#include <string>

int main(void)
{
    std::string string1 = "42.33";

    int         N1 = 20;
    double      N2 = 33.5;
    float       N3 = 55.23;

    int         int_string1;
    double      double_string1;
    float       float_string1;

    std::string string_N1;
    std::string string_N2;
    std::string string_N3;
    
    int         int_N3;

    int_string1     = std::stoi(string1);
    double_string1  = std::stod(string1);
    float_string1   = std::stof(string1);

    string_N1 = std::to_string(N1);
    string_N2 = std::to_string(N2);
    string_N3 = std::to_string(N3);

    std::cout << int_string1 << '\n';
    std::cout << float_string1 << '\n';
    std::cout << double_string1 << '\n';

    std::cout << string_N1 << '\n';
    std::cout << string_N2 << '\n';
    std::cout << string_N3 << '\n';

    int_N3 = N3;
    std::cout << int_N3 << '\n';
    int_N3 = (int)N3;
    std::cout << int_N3 << '\n';
    int_N3 = int(N3);
    std::cout << int_N3 << '\n';

    return (0);
}
