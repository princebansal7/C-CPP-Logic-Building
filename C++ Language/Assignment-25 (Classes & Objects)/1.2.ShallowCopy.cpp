/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// if we don't make any constructor explicitly:
// => Compiler will automatically creates the following:
//    1. Default constructor
//    2. Copy constructor (it does Shallow copy too)
//    3. Overloaded assignment operator (It does shallow copy)
//    4. Destructor

class Pair {

    int a;
    int b;

public:
    void setPair(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void showPair()
    {
        cout << "a = " << a << " b = " << b << nl;
    }
};

int main()
{
    Pair p1; // calls default constructor
    p1.setPair(6, 9);
    p1.showPair();
    Pair p2 = p1; // 'Copy constructor' invoked, beacuse assigning values during declaration and just copies the corresponding values of varibles of p1 object into p2 (implicitly made by compiler)
    p2.showPair();

    Pair p3;
    p3 = p1; // Implicitly overloaded 'Assignment operator' gets invoked => it also just copies the corresponding varibales values of p2 into p1
    p3.showPair();

    return 0;
}

/*

Compilers Copy constructor code looks like this:

Pair(Pair &P){
    a = P.a;
    b = P.b;
}

Compilers overloaded assignment operator code looks like this:

Pair operator=(Pair &P){
    Pair temp;
    temp.a = P.a;
    temp.b = P.b;
    return temp;
}

What is the problem in this ?
    what if some pointer variable was member of our class which stores some address ?
        => when copy or assignment operator gets invoked for other objects => it just copies the corresponding values
        => Just copies the address (and not creates a whole new memory block)
        => both objects member pointer will just points to same memory location => that's called 'Shallow Copy'
        => changes made by one also reflects in others too
        => if one object gets deleted hence releases the memory of block => other's one was also pointing to it but now that memory got released
        => now other member pointer variables beacomes Dangling pointer

    Above expalation example will be shown in next file 1.3.ShallowCopy2.cpp
*/
