/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Rectangle {
    float length, breadth;

public:
    void setValue(float l, float b)
    {
        if (l > 0 && b > 0) {
            length = l;
            breadth = b;
        } else {
            cout << "Invalid parameters" << nl;
            return;
        }
    }
    float area()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle obj;
    obj.setValue(11, 23);
    cout << obj.area() << nl;

    obj.setValue(10.1, 20.44);
    cout << obj.area() << nl;

    obj.setValue(10.3, 20.89);
    cout << obj.area() << nl;
    return 0;
}