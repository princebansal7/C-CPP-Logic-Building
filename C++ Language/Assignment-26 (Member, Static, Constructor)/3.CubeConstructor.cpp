/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Cube {
private:
    int side;

public:
    Cube(int x)
    {
        side = x;
    }

    int getVolume()
    {
        return side * side * side;
    }
};

int main()
{
    Cube c1(3), c2(5);
    cout << "Volume is Cube 1 is: " << c1.getVolume() << nl;
    cout << "Volume is Cube 2 is: " << c2.getVolume() << nl;
    return 0;
}