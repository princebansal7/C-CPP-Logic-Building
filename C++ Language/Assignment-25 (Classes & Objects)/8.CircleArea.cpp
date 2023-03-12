/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Circle {
    float radius;

public:
    void setValue(float r)
    {
        if (r > 0) {
            radius = r;
        } else {
            cout << "Invalid parameters" << nl;
            return;
        }
    }
    float area()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle obj;
    obj.setValue(11);
    cout << obj.area() << nl;

    obj.setValue(5.5);
    cout << obj.area() << nl;

    obj.setValue(10.3);
    cout << obj.area() << nl;
    return 0;
}