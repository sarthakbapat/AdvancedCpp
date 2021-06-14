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

    // Copy constructor
    Person(const Person &other) {
        cout << "Copy constructor running ----" << endl;
        name = other.name;
        age = other.age;
    }

    Person(string name, int age) {

        this->name = name;
        this->age = age;

        }

    void print() {
        cout << name << ":" << age << endl;
    }

};

int main()
{   
    map<int, Person> people;

    people[0] = Person("Sarthak", 25);
    people[1] = Person("David", 20);
    people[2] = Person("Smudge", 53);

    people.insert(make_pair(55, Person("Virat", 32)));

    for (map<int, Person>::iterator it = people.begin(); it != people.end(); it++){
        cout << it->first << ":" << flush;
        it->second.print();
    }

    return 0;
}