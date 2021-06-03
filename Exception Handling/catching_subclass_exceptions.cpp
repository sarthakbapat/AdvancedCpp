#include<iostream>
#include<exception>
using namespace std;

void goesWrong(){
    bool error1Detected = true;
    bool error2Detected = false;

    if (error1Detected){
        throw bad_alloc();
    }

    if (error2Detected){
        throw exception();
    }
}

int main()
{
    try{
        goesWrong();
    }
    catch(bad_alloc e){
        cout << "Caught bad alloc: " << e.what() << endl;
    }
    //bad alloc will be caught here because of polymorphism, bad_alloc is a subclass of exception. So its important to put subclasses
    //first before the parent exception class. That is why, bad_alloc is moved above the exception catch block.
    catch(exception e){
        cout << "Caught exception: " << e.what() << endl;
    }

    return 0;
}
