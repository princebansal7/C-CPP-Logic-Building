/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// function prototype:
//   returnType FunctionName(arg1, arg2...)
//             |__________________________|
//                   Function Signature
//
// Rule: in C: Function name must be Unique
//       in C++: Function Signature must be unique

double area(int r)
{
    return 3.14 * r * r;
}

double area(float l, float b)
{
    return l * b;
}

double area(int base, int h)
{
    return 0.5 * base * h;
}

int main()
{
    int r;
    cout << "Enter radius: ";
    cin >> r;
    cout << "Area of Circle is: " << area(r) << nl << nl;

    float l, b;
    cout << "Enter l & b: ";
    cin >> l >> b;
    cout << "Area of Rectangle is: " << area(l, b) << nl << nl;

    int base, h;
    cout << "Enter base & height: ";
    cin >> base >> h;
    cout << "Area of Triangle is: " << area(base, h) << nl << nl;

    return 0;
}