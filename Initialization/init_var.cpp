
/*
    Methods of initializing variables and arrays
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

    return 0;
}