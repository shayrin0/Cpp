
#include <iostream>

using namespace std;

void Print (int count, char ch)
{
    for (int i=0; i<count; i++)
        cout << ch;
    cout << endl;
}

void EndMessage()
{
    cout << "End of Program!" << endl;
}

int main()
{
    atexit(EndMessage);
    
    Print(5, '#');

    void (*ptr)(int, char) = Print;
    (*ptr)(8, '*');
    ptr(3, '@');

    cout << "End of Main!" << endl;

    return 0;
}