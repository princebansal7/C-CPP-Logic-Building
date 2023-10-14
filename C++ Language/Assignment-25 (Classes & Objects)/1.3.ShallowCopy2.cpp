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
// => if we create Default constructor => compiler just creates Copy Constructor
// => if we create Copy constructor => compiler doesn't create any constructor

// In below example I will create constructor just like compiler would've create we doesn't
// (To show how shallow copy happens)

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

    Pair(Pair& P)
    {
        a = P.a;
        b = P.b;
        ptr = P.ptr; // just copies the address
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
    Pair p2 = p1; // 'Copy constructor' invoked, beacuse assigning values during declaration and just copies the corresponding values of varibles of p1 object into p2
    p2.showPair(); // will show same address like p1's ptr

    // When programs is about it terminate => p1 and p2 scope ends => destructor gets invoked
    // first p1's destructor frees that blocks memory to which p1's ptr was poiting (no issue)
    // now, when destructor invokes for p2's ptr => tries to release again the same memory doesn't exists for the program
    // => Unwanted termination of Program

    return 0;
}

/*

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


    // => That's why in such cases we do 'Deep Copy':
    //    Usually when we have to explicitly make copy constructor => we usually do deep copy
    // Example in next code file: 1.4.DeepCopy.cpp
*/
