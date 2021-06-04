#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    // Create an object of ofstream class.
    ofstream outFile;

    string outputFileName = "text.txt";

    outFile.open(outputFileName);

    if (outFile.is_open()){

        for (int i = 0; i<10 ; i++){
            outFile << (i+1) << ": " << "Hey there!" << endl;
        }
        outFile.close();
    }
    else {
        cout << "Could not create file: " << outputFileName << endl;
    }

    return 0;
}