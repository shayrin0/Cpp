
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void openFile(ifstream&, string);

int main()
{
    // 1. open the file
    ifstream inFile;
    openFile(inFile, "sentence.txt");

    // 2. process the file

    // 3. close the file

    return 0;
}

void openFile(ifstream& inFile, string fname)
{
    inFile.open(fname);

    if (inFile.is_open())
        cout << "Successfully opened file!" << endl;
    else
    {
        cout << "Failed to open file!" << endl;
        exit(-1);
    }
}