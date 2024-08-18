/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
#define SIZE 100

class Array {
    int arr[SIZE];

public:
    void setAtIndex(int index, int value)
    {
        if (index >= SIZE || index < 0)
            cout << "Invalid Index: Out of Bound" << nl;
        else
            arr[index] = value;
    }

    void getAtIndex(int index)
    {
        if (index >= SIZE || index < 0)
            cout << "Invalid Index: Out of Bound" << nl;
        else
            cout << arr[index] << nl;
    }

    int operator[](int index)
    {
        if (index >= SIZE || index < 0) {
            cout << "Invalid Index: " << index << " (Out of Bound)" << nl;
            exit(0);
        }
        return arr[index];
    }
};

int main()
{
    Array a;
    a.setAtIndex(3, 69);
    a.getAtIndex(3);
    a.getAtIndex(9);
    a.getAtIndex(150);
    a.getAtIndex(-3);

    // cout << a[3] << nl; // without doing overloading of [] operator, it won't work

    // We will do overloading such that it also checks for Out of Bound case (unlike C,C++ subscript operator which doesn't check out of bound case)

    cout << a[3] << nl; // object a calls [] operator with int value as argument and it returns int value as result

    cout << a[103] << nl;

    return 0;
}