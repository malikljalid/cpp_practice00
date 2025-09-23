#include <iostream>

int main(void)
{
    bool result;

    // NOT(5 > 6 OR 7=7) AND NOT(1 OR false)
    result = !(5 > 6 || 7 == 7) && (1 or false);
    std::cout << "Wow, result is : " << result << std::endl;

    return (0);
}
