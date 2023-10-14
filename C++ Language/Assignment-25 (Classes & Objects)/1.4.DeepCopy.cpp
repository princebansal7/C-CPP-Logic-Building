/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
/*
    What is Deep Copy ?

     => In simple terms, When we want to copy object's member pointers value as well as we want to create new memeory block
        for the new object's member pointer variables for which copy constrctor gets invoked

Visually (Deep copy):

       p1:                                    p2:
          a: 3                                  a: 3
          b: 4                                  b: 4
          ptr -------->  69                     ptr ----------------> 69

*/

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
        *ptr = *(P.ptr); // copies the value of p1's ptr memory block (not the address) into p2's object memory block
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
    p1.setPair(3, 4, 69);
    p1.showPair(); // Keep an eye on p1's ptr address
    Pair p2 = p1; // 'Copy constructor' invoked for p2 obeject and takes p1 object as argument (does Deep copy)
    p2.showPair(); // will show different address from p1's ptr

    // This time program will terminate fine without any issues

    return 0;
}
