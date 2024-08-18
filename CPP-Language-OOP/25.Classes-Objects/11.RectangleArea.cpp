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
    void showValue()
    {
        cout << "Length is: " << length << nl;
        cout << "Breadth is: " << breadth << nl;
    }
    float calArea()
    {
        return length * breadth;
    }
};

int main()
{
    Rectangle obj;
    obj.setValue(11, 23);
    obj.showValue();
    cout << "Area is: " << obj.calArea() << nl << nl;

    obj.setValue(10.1, 20.44);
    obj.showValue();
    cout << "Area is: " << obj.calArea() << nl << nl;

    obj.setValue(10.3, 20.89);
    obj.showValue();
    cout << "Area is: " << obj.calArea() << nl << nl;
    return 0;
}