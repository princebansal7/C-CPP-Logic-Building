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
            cout << "Invalid Index" << nl;
        else
            arr[index] = value;
    }

    void getAtIndex(int index)
    {
        if (index >= SIZE || index < 0)
            cout << "Invalid Index" << nl;
        else
            cout << arr[index] << nl;
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

    cout << a[3] << nl; // without doing overloading of [] operator, it won't work
    return 0;
}