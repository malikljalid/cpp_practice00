#include <iostream>
#include <string>

int main(void)
{
    std::string Message = "Zakaria! Who is Zakaria ?";

    std::cout << "Length of message is : " << Message.length() << '\n';
    std::cout << Message[3] << '\n';    // will print the second a in Message

    std::string S1;
    std::string S2;
    std::string S3;

    S1 = "13";
    S2 = "20";
    S3 = S2 + S1; // S2 + S1 result is different than S1 + S2

    std::cout << S3 << '\n'; // because its concatination of 2 two strings

    int Number = std::stoi(S1) + std::stoi(S2); // this is now normal math

    std::cout << "Number = " << Number << '\n';
    return (0);
}
