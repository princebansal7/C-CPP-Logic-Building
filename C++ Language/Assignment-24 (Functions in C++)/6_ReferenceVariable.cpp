/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// using reference variables

void Swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a, b;
    cout << "Enter a & b: ";
    cin >> a >> b;
    cout << "Before Swapping: " << nl << a << " " << b << nl;
    Swap(a, b);
    cout << "After Swapping: " << nl << a << " " << b << nl;

    return 0;
}