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
    // As not making default constructor explicitly , use default arguments
    Cube(int x = 0)
    {
        side = x;
    }
    void setSide(int a)
    {
        side = a;
    }

    int getSide()
    {
        return side;
    }

    int getVolume()
    {
        return side * side * side;
    }
};

int main()
{
    Cube c1(3), c2;
    cout << "Volume is Cube 1 is: " << c1.getVolume() << nl;
    c2.setSide(7);
    cout << "side of Cube 2 is: " << c2.getSide() << nl;
    cout << "Volume is Cube 2 is: " << c2.getVolume() << nl;
    return 0;
}