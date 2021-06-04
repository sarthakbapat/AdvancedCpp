#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    string inFileName = "text.txt";

    ifstream inFile;

    inFile.open(inFileName);

    if (inFile.is_open()){

        string line;
        // Gets only till the first space is found.
        inFile >> line;
        cout << line << endl;
        //  To read a complete line use
        getline(inFile, line);
        cout << line << endl;
        // Read the entire file in the following way.
        while(!inFile.eof()){
            getline(inFile, line);
            cout << line << endl;
        }

        inFile.close();

    }
    else {
        cout << "Cannot open file: " << inFileName << endl;
    }

    return 0;
}