/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Static member variables doesn't depend on Objects of class
// Hence, we can simply access & modify them just using class name

class StaticCount {
    static int counter; // declaring static variable

public:
    static int getStaticCount()
    {
        return counter;
    }
    static void increaseStaticCount()
    {
        counter++;
    }
};

int StaticCount::counter = 0; // defining static variable (must), only then it'll get memory

int main()
{
    StaticCount::increaseStaticCount(); // 0 -> 1
    StaticCount::increaseStaticCount(); // 1 -> 2
    StaticCount::increaseStaticCount(); // 2 -> 3

    cout << StaticCount::getStaticCount() << nl; // 3

    return 0;
}