/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// This way counter will increase everytime we create a new object
// Static member variables shares memory with all the object and not doesn't gets created seperately for each object

class Counter {
    static int counter; // declaring static variable

public:
    Counter()
    {
        counter++;
    }

    int objGetCount()
    {
        return counter;
    }
    static int getCount()
    {
        return counter;
    }
};

int Counter::counter = 0; // defining static variable (must), only then it'll get memory

int main()
{
    Counter obj1;
    cout << obj1.objGetCount() << nl; // 1, object accessing member function
    cout << obj1.getCount() << nl; // 1, object accessing static member function
    cout << Counter::getCount() << nl; // 1,  accessing static member function with class name

    Counter obj2;
    // cout << Counter::objGetCount() << nl; // ERROR: can't access member function with class name (had to be static member function or variable only)
    cout << Counter::getCount() << nl; // 2
    cout << obj2.getCount() << nl; // 2

    Counter obj3, obj4, obj5;
    cout << Counter::getCount() << nl; // 5

    return 0;
}