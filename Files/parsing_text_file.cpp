#include<iostream>
#include<fstream>
using namespace std;


int main()
{
    ifstream input;
    string fileName = "stats.txt";

    input.open(fileName);

    if (!input.is_open()){
        return 1;
    }

    while (input){
        string line;
        // Use delimiter :
        getline(input, line, ':');

        int population;
        input >> population;

        //input.get();
        // Whitespace character ws.
        input >> ws;

        if (!input){
            break;
        }

        cout << "'" << line << "'" <<" -- " << "'" << population << "'" << endl;
    }

    input.close();

    return 0;
}