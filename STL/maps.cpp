#include<iostream>
#include<map>
using namespace std;


int main()
{
    map<string, int> ages;

    ages["Mike"] = 40;
    ages["Sarthak"] = 25;
    ages["Ros"] = 30;

    // Another way to insert elements in the map. 
    ages.insert(pair<string, int>("Peter", 45));

    // Instead of typing the data types, use this method.
    ages.insert(make_pair("ssb", 50));

    cout << ages["Sarthak"] << endl;

    // ages.find() returns an iterator which points to end of the map if the key is not found.
    if (ages.find("Ros") != ages.end()){
        cout << "Found Ros" << endl;
    }
    else{
        cout << "Key not found" << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        pair<string, int> age = *it;

        cout << age.first << "-" << age.second << endl;
    }

    for (map<string, int>::iterator it = ages.begin(); it != ages.end(); it++){
        cout << it->first << ":" << it->second << endl;
    }

    return 0;
}