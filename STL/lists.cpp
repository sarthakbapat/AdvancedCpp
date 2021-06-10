#include<iostream>
#include<list>
using namespace std;


int main()
{
    list<int> numbers;

    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_front(0);

    list<int>::iterator it = numbers.begin();
    it++;
    // Pass the iterator and the number to enter at a given position.
    numbers.insert(it, 100);
    cout << "Element: " << *it << endl;

    list<int>::iterator it_erase = numbers.begin();
    it_erase++;
    // Pass the iterator to delete a number at a given location.
    it_erase = numbers.erase(it_erase);
    cout << "Element: " << *it_erase << endl;

    for (list<int>::iterator it = numbers.begin(); it != numbers.end();){
        if(*it == 2){
            numbers.insert(it, 123);
        }

        if(*it == 1){
            it = numbers.erase(it);
        }
        else {
            it ++;
        }
    }


    for (list<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
        cout << *it << endl;
    }

    return 0;
}