
#include <iostream>

using namespace std;

// Add two numbers and return the sum
int Add(int *a, int *b) ;

// Add two numbers and return the sum through the 
// third pointer argument
void AddVal(int *a, int *b, int *result); 

// Swap the value of two integers
void Swap(int *a, int *b) ;

// Generate the factorial of a number 
// and return that through the second pointer argument
void Factorial(int *a, int *result);

int main()
{
    int a{1}, b{2}, c{0}, d{1};

    cout << Add(&a,&b) << endl;

    AddVal(&a,&b,&c);
    cout << c << endl;

    Swap(&a,&b);
    cout << "a=" << a << " b=" << b << endl;
    cout << "c=" << c << endl;

    Factorial(&c, &d);
    cout << d << endl;

    return 0;
}


int Add(int *a, int *b)
{
    return (*a + *b);
}

void AddVal(int *a, int *b, int *result)
{
    *result = *a + *b;
} 

void Swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void Factorial(int *a, int *result)
{
    if (*a < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else 
    {
        for(int i=1; i<=*a; i++)
            *result *= i;
    }
}