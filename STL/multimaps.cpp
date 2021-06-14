#include<iostream>
#include<map>
using namespace std;


int main()
{
    multimap<int, string> lookup;

    lookup.insert(make_pair(25, "Mike"));
    lookup.insert(make_pair(15, "Rob"));
    lookup.insert(make_pair(10, "Bob"));
    lookup.insert(make_pair(15, "Ron"));

    for(multimap<int, string>::iterator it = lookup.begin(); it != lookup.end(); it++){
        cout << it->first << ":" << it->second << endl;
    }

    cout << endl;

    // This for loop gives all the elements starting from the key passed in find.
    for(multimap<int, string>::iterator it = lookup.find(15); it != lookup.end(); it++){
        cout << it->first << ":" << it->second << endl;
    }

    cout << endl;

    // To find a range of values, use equal_range() that returns two iterators, one at the start of range
    // and the other at the end of the range.
    //pair<multimap<int, string>::iterator, multimap<int, string>::iterator> its = lookup.equal_range(15);
    
    // C++ 11 : use the keyword auto to get the type.
    auto its = lookup.equal_range(15);

    for(multimap<int, string>::iterator it = its.first; it != its.second; it++){
        cout << it->first << ":" << it->second << endl;
    }

    return 0;
}