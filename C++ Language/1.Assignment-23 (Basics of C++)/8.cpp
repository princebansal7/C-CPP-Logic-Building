/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
    int a, b;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    cout << "Before Swapping:" << nl << "a = " << a << " b = " << b << nl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After Swapping:" << nl << "a = " << a << " b = " << b << nl;

    return 0;
}