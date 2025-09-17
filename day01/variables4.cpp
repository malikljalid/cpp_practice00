#include <iostream>

int main(void)
{
    //int bad#name; its NOT possible.. variables names contain only letters and digits.
    //int bad name; NOT valid.. because holds a space
    //int 1badename; NOT valid.. 
    int goodname; //valid name but not likeable.
    int good_name; //valid name its OK.
    int goodName; //valid name EVEN BETTER like this.
    int _goodName; //sometimes we may need our name to start with underscore.

    goodname = 10;
    goodName = 25;
    // as you can see goodname variables is not the same as goodName variable, they are indepenedt and each one has its own
    // place in the memory.. because in C++ names ar case senestive.

    // int for
    // int return --> those also are NOT valid names.. because they are using reserved keywords in C++.

    goodName = 1;
    _goodName = 1;
    std::cout << "for NOW this the preferable way to make names in C++ : " << "GoodNamesMakeThingsBetter" << '\n';

    return (0);
}