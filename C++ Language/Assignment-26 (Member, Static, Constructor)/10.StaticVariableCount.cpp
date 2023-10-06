/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// This way counter will increase everytime we create a new object
// Static member variables shares memory with all the object and not doesn't gets created seperately for each object

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