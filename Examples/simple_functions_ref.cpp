
/* References example */

#include <iostream>

using namespace std;

//Add two numbers and return the result through a reference parameter
void Add(int a,int b, int &result) ;    

// Find factorial of a number and 
// return that through a reference parameter
void Factorial(int a, int &result) ;    

//Swap two numbers through reference arguments
void Swap(int &a, int &b) ;            


int main()
{
    int a{1}, b{2}, c{0}, d{1};

    Add(a, b, c);
    cout << "a+b=" << c << endl;

    cout << "a=" << a << " b=" << b << endl;
    Swap(a, b);
    cout << "a=" << a << " b=" << b << endl;

    Factorial(c, d);
    cout << "factorial of " << c << " is " << d << endl;

    return 0;
}


void Add(int a,int b, int &result)
{
    result = a + b;
}

void Swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Factorial(int a, int &result)
{
    if (a < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else 
    {
        for(int i=1; i<=a; i++)
            result *= i;
    }
}