/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

/*

int a;
a = !5;
cout << a; // 0

*/

// We are making our not operator such that it returns -value

class Integer {
    int value;

public:
    Integer(int value = 0)
    {
        this->value = value;
    }

    void setValue(int value = 0)
    {
        this->value = value;
    }
    int getValue()
    {
        return value;
    }

    int operator!()
    {
        return -value;
    }
};

int main()
{
    int a;
    a = !5;
    cout << a << nl; // 0

    Integer i1;
    i1.setValue(69);
    cout << i1.getValue() << nl;

    cout << !i1 << nl;

    Integer i2;

    // !i1 returns the negated int (primitive) value which is getting assigned to i1 object (non-primitive)
    // => how ? because we made a constructor which takes int argument, without it will give error

    i2 = !i1;
    cout << i2.getValue() << nl;

    return 0;
}