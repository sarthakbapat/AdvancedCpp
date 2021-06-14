#include<iostream>
#include<map>
using namespace std;

class Person {
private:
    string name;
    int age;

public:

    Person(): name(""), age(0) {

    }

    Person(string name, int age) {

        this->name = name;
        this->age = age;

        }

    void print() const {
        cout << name << ":" << age << flush;
    }

    // Operator overloading.
    bool operator<(const Person &other) const {

        if(name == other.name){
            return age < other.age;
        }
        else {
            return name < other.name;
        }
        
    }

};

int main()
{   
    map<Person, int> people;

    people[Person("Mike", 30)] = 30;
    people[Person("MS", 36)] = 36;
    people[Person("Chris", 20)] = 40;
    people[Person("Rob", 25)] = 25;
    people[Person("Bob", 15)] = 15;
    people[Person("Mike", 60)] = 160;

    //people.insert(make_pair(55, Person("Virat", 32)));

    for (map<Person, int>::iterator it = people.begin(); it != people.end(); it++){
        cout << it->second << ":" << flush;
        it->first.print();
        cout << endl;
    }

    return 0;
}