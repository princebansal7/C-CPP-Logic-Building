/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Counter {
    int counter;

public:
    Counter()
    {
        counter = 0;
    }

    void increaseCounter()
    {
        counter++;
    }
    int getCount()
    {
        return counter;
    }
};

int main()
{
    Counter obj1;
    obj1.increaseCounter();
    cout << obj1.getCount() << nl;
    obj1.increaseCounter();
    cout << obj1.getCount() << nl;
    obj1.increaseCounter();
    cout << obj1.getCount() << nl;
    obj1.increaseCounter();
    cout << obj1.getCount() << nl;

    return 0;
}