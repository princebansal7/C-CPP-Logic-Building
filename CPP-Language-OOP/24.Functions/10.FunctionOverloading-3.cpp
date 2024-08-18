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

void sum(int a, int b)
{
    cout << "Sum is: " << a + b << nl << nl;
}

void sum(double a, double b)
{
    cout << "Sum is: " << a + b << nl << nl;
}

void sum(char a, char b)
{
    cout << "Sum is: " << a + b << nl << nl;
}

int main()
{
    char e, f;
    cout << "Enter 2 characters: " << nl;
    cin >> e >> f;
    sum(e, f);

    int a, b;
    cout << "Enter 2 integer numbers a & b: " << nl;
    cin >> a >> b;
    sum(a, b);

    double c, d;
    cout << "Enter 2 Real/decimal numbers c & d: " << nl;
    cin >> c >> d;
    sum(c, d);

    return 0;
}