
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void openFile(ifstream&, string);
void processFile(ifstream&);

int main()
{
    // 1. open the file
    ifstream inFile;
    openFile(inFile, "sentence.txt");

    // 2. process the file
    processFile(inFile);

    // 3. close the file
    inFile.close();

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

void processFile(ifstream& inFile)
{
    string line;

    while(!inFile.eof()) // eof = end of file
    {
        // read line by line from the file
        getline(inFile, line);

        if (inFile.good())
        {
            cout << line << endl;
        }
    }
}