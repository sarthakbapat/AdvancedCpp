#include<iostream>
#include<stack>
#include<queue>
using namespace std;

class Test {
private:
    string name;

public:
    Test(string name) : name(name) {

    }

    ~Test() {
        //cout << "Object destroyed" << endl;
    }

    void print() {
        cout << name << endl;
    }
};

int main()
{
    stack<Test> testStack;

    testStack.push(Test("Mike"));
    testStack.push(Test("John"));
    testStack.push(Test("Rob"));

    // This is invalid code! Object is destroyed when pop is called. The reference &test1 refers to destroyed object.
    // Test &test1 = testStack.top();
    // testStack.pop();
    // test1.print();

    while(testStack.size() > 0){
        Test &test = testStack.top();
        test.print();
        testStack.pop();
    }

    cout << "----------------------" << endl;

    queue<Test> testQueue;

    testQueue.push(Test("Mike"));
    testQueue.push(Test("John"));
    testQueue.push(Test("Rob"));

    testQueue.back().print();

    while(testQueue.size() > 0){
        Test &test = testQueue.front();
        test.print();
        testQueue.pop();
    }

    return 0;
}