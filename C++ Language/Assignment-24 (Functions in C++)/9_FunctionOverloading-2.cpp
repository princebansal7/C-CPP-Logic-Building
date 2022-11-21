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

void maximum(int a, int b)
{
    if (a > b)
        cout << "a is Greater" << nl << nl;
    else
        cout << "b is greater" << nl << nl;
}

void maximum(double c, double d)
{
    if (c > d)
        cout << "c is Greater" << nl << nl;
    else
        cout << "d is greater" << nl << nl;
}

int main()
{
    int a, b;
    cout << "Enter 2 integer numbers a & b: " << nl;
    cin >> a >> b;
    maximum(a, b);

    double c, d;
    cout << "Enter 2 Real/decimal numbers c & d: " << nl;
    cin >> c >> d;
    maximum(c, d);

    return 0;
}