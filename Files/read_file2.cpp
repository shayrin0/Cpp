#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
#include <vector>

using namespace std;

void openFile (ifstream&, string);
void processFile (ifstream&);

int main() 
{
    string line;
    vector <bool> data;

    // write the chars in another file
    ofstream outFile;
    outFile.open("chars.txt");

    // 1. open the file
    ifstream inFile ("sentence.txt");
    // ifstream inFile;
    // openFile(inFile, "sentence.txt");

    // processFile(inFile);
    // ifstream myfile ("sentence.txt");
    if ( inFile.is_open() ) 
    {
        char mychar, characters[2];
        int count = 0, count1 = 0;

        while ( inFile ) 
        {
            mychar = inFile.get();
            cout << mychar << '\t';

            if(inFile[count].find("\t\n\t\n"))
            {
                cout << "found" <<endl;
            }

            // if (count % 2 == 0)
            // {
            //     if (count == 0)
            //         characters[0] = mychar;
            //     else
            //         characters[0] = characters[1];
            // }
            // else
            // {
            //     characters[1] = mychar;
            // }

            // if (count != 0)
            // {
            //     if (characters[0] = '\n')
            //     {
            //         if (characters[0] == characters[1])
            //         {
            //             data.push_back(mychar);
            //         }
            //     }
            // }

            count++;
        }
    }
    // for (bool x : data)
	// 	cout << "vector : " << x << endl;
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
    char characters[2] = {-1, -2};
    istringstream iss;
    int count=0;

    if (inFile.is_open())
    {
        while(inFile) 
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
                    {
                        cout << c << endl;
                        if (count % 2 == 0)
                        {
                            if (count == 0)
                                characters[0] = c;
                            else
                                characters[count] = characters[count-1];
                        }
                        else
                        {
                            characters[count] = c;
                        }

                        if (count != 0)
                        {
                            if (characters[0] = '\n')
                            {
                                if (characters[0] == characters[1])
                                    cout << "data" << endl;
                            }
                        }
                    }
                }
            }
        }
    }
}