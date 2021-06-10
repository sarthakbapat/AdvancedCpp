#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<string> strings;
    vector<int> numbers;

    strings.push_back("One");
    strings.push_back("two");
    strings.push_back("Three");

    numbers.push_back(3);
    numbers.push_back(21);
    numbers.push_back(7);

    for (int i=0; i<strings.size(); i++){
        cout << strings[i] << endl;
    }

    //Iterator creation.

    for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++){
        cout << *it << endl;
    }

    for (vector<int>::iterator num = numbers.begin(); num != numbers.end(); num++){
        cout << *num << endl;
    }

    numbers.pop_back();

    cout << "Print after pop back ....." << endl;

    for (vector<int>::iterator num = numbers.begin(); num != numbers.end(); num++){
        cout << *num << endl;
    }

    return 0;
}