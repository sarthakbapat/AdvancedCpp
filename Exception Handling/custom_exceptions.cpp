#include<iostream>
#include<exception>
using namespace std;

//Override what() method in exception class to write your own exception.
class MyException: public exception {
    public:
        //override the what() in exception class.
        virtual const char* what() const throw() {
            return "Something wrong happened!";
        }

};

class Test {
    public:
        void goesWrong(){
            throw MyException();
        }
};

int main()
{
    Test test;
    try{
        test.goesWrong();
    }
    catch(MyException e){
        cout << " Caught my exception: " << e.what() << endl;
    }

    cout << "Still running....";

    return 0;
}