
/*
    Methods of initializing variables and arrays
    1. Value initialization => T obj{}
    2. Direct initialization => T obj{v}
    3. Copy initialization => T obj = v
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a1; // uninitialized
    int a2 = 0; // copy initialization
    int a3(5); // direct initialization

    string s1;
    string s2("C++"); // direct initialization

    char d1[8];
    char d2[8] = {'\0'};
    char d3[8] = {'a', 'b', 'c'}; // aggregate initialization
    char d4[8] = {"abcd"};

    // Uniform initialization
    int b1{}; // value initialization, initializes to 0
    // int b2(); // most vexing parse (b2 is a function)
    int b3{5}; // direct initialization

    int e1[8]{};
    char e2[8]{"Hello"};

    int *p1 = new int();
    char *p2 = new char[8]{};
    char *p3 = new char[8]{"Hello"};

    return 0;
}