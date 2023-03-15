/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Overloading implemented

class Area {
public:
    // area of square
    int area(int l)
    {
        return l * l;
    }
    // area of rectangle
    float area(float l, float b)
    {
        return l * b;
    }

    // area of circle
    float area(float r)
    {
        return 3.14 * r * r;
    }
};

int main()
{
    Area obj;
    cout << "Area of square is: " << obj.area(3) << nl;

    cout << "Area of circle: " << obj.area(5.6f) << nl; // 5.6 by default is double, so typecasted

    cout << "Area of rectangle: " << obj.area(3, 9.4) << nl;
    return 0;
}