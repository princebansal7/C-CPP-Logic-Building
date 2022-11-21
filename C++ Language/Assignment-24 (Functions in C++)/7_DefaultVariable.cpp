/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Using Default Arguments

int Add(int a, int b, int c = 0)
{
    int sum = a + b + c;

    return sum;
}

int main()
{
    int a, b;
    cout << "Enter a & b: ";
    cin >> a >> b;
    cout << "Sum of a & b is: " << Add(a, b) << nl << nl << nl;

    int c;
    cout << "Enter a, b & c: ";
    cin >> a >> b >> c;
    cout << "Sum of a, b & c is: " << Add(a, b, c) << nl;
    return 0;
}