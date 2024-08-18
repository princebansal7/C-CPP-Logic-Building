/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Circle {
    float radius;

public:
    void setRadius(float r)
    {
        if (r > 0) {
            radius = r;
        } else {
            cout << "Invalid parameters" << nl;
            return;
        }
    }
    void showRadius()
    {
        cout << "R=" << radius << nl;
    }

    float calArea()
    {
        return 3.14 * radius * radius;
    }
};

int main()
{
    Circle obj;
    obj.setRadius(11);
    obj.showRadius();
    cout << "Area is: " << obj.calArea() << nl << nl;

    obj.setRadius(5.5);
    obj.showRadius();
    cout << "Area is: " << obj.calArea() << nl << nl;

    obj.setRadius(10.3);
    obj.showRadius();
    cout << "Area is: " << obj.calArea() << nl << nl;
    return 0;
}