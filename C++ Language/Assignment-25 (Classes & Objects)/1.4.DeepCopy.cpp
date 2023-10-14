/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Pair {

    int a, b;
    int* ptr;

public:
    Pair()
    {
        a = 0;
        b = 0;
        ptr = new int;
    }

    // Custom copy constructor so that it does 'Deep Copy'
    Pair(Pair& P)
    {
        a = P.a;
        b = P.b;
        ptr = new int; // created new memory block
        *ptr = *(P.ptr); // passes the value in the memory block to new memory block
    }
    void setPair(int a, int b, int val)
    {
        this->a = a;
        this->b = b;
        *ptr = val;
    }
    void showPair()
    {
        cout << "a = " << a << " b = " << b << nl;
        cout << " (value) *ptr = " << *ptr << nl;
        cout << " (Address) ptr = " << ptr << nl;
    }

    ~Pair()
    {
        delete ptr;
    }
};

int main()
{
    Pair p1; // calls default constructor
    p1.setPair(6, 9, 69);
    p1.showPair(); // Keep an eye on p1's ptr address
    Pair p2 = p1; // 'Copy constructor' invoked, which does Deep copy
    p2.showPair(); // will show different address from p1's ptr

    // This time program will terminate fine without any issues

    return 0;
}
