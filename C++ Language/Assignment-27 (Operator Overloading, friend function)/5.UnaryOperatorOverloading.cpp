/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Triplet {
    int a, b, c;

public:
    Triplet(int a = 0, int b = 0, int c = 0)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void setTriplets(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void getTriplets()
    {
        cout << "a = " << a << nl;
        cout << "b = " << b << nl;
        cout << "c = " << c << nl;
    }

    Triplet operator-()
    {
        Triplet ans;
        ans.a = -a;
        ans.b = -b;
        ans.c = -c;
        return ans;
    }
};

int main()
{
    Triplet t1;
    t1.setTriplets(2, -69, 7);
    t1.getTriplets();

    Triplet t2 = -t1;
    t2.getTriplets();

    return 0;
}