
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

void openFile (ifstream&, string);
void processFile (ifstream&);

int main()
{
    string line;

    // 1. open the file
    ifstream inFile;
    openFile(inFile, "sentence.txt");

    // // 2. process the file
    processFile(inFile);

    // 3. close the file
    inFile.close();

    return 0;
}

void openFile (ifstream& inFile, string fname)
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

void processFile (ifstream& inFile)
{
    string line, word;
    istringstream iss;
    int count=0;

    // write the chars in another file
    ofstream outFile;
    outFile.open("chars.txt");

    while(!inFile.eof()) // eof = end of file
    {
        // read line by line from the file
        getline(inFile, line);

        if (inFile.good())
        {
            cout << line << endl;

            // read word by word from the line
            iss.clear(); // clear out state
            iss.str(line);

            while(iss.good())
            {
                iss >> word;
                cout << word << endl;

                // read char by char from the word
                for (char c : word)
                    cout << c << endl;
            }
        }
    }
    outFile.close();
}