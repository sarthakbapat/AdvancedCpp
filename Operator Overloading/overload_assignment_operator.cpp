#include<iostream>
using namespace std;

class Test {
private:
    int id;
    string name;

public:
    Test(): id(0), name("") {

    }

    Test(int id, string name): id(id), name(name) {

    }

    void print(){
        cout << id << ":" << name << endl;
    }

    const Test &operator=(const Test &other) {

        cout << "Assignment running" << endl;

        id = other.id;
        name = other.name;

        return *this;
    }

    Test(const Test &other){
        cout << "Copy constructor running." << endl;
        id = other.id;
        name = other.name;
    }


};


int main()
{
    Test test1(10, "Mike");
    test1.print();

    Test test2(20, "Bob");

    test2 = test1;
    test2.print();

    Test test3(35, "Josh");

    // The = operator in test3 = test2 is like a method call on test3 with test2 as a parameter.
    test3.operator=(test2);
    test3.print();

    cout << "-------------" << endl;

    //Copy Initialization. Invokes implicit copy constructor. This is because the object is not initialized
    //with any values or default values. So a copy constructor is invoked due to direct assignment and not 
    //the assignment operator.

    Test test4 = test1;
    test4.print();

    return 0;
}