#include<iostream>
#include<vector>
using namespace std;

class Test {
    int id;
    string name;

public:
    Test(int id, string name): id(id), name(name){

    }

    void print(){
        cout << id << ":" << name << endl;
    }

    // bool operator<(const Test &other) const {
    //     return id < other.id;
    // }

    friend bool comparator(const Test &a, const Test &b);

};

bool comparator(const Test &a, const Test &b){
    return a.id < b.id ;
}


int main()
{
    vector<Test> tests;

    tests.push_back(Test(4, "Ro"));
    tests.push_back(Test(5, "MS"));
    tests.push_back(Test(42, "Vi"));
    tests.push_back(Test(14, "Aj"));

    sort(tests.begin(), tests.end(), comparator);


    for(int i=0; i<tests.size(); i++) {
        tests[i].print();
    }

    return 0;
}