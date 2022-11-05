/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
    int a, b;
    cout << "Enter a & b: ";
    cin >> a >> b;
    if (a > b)
        cout << "a is Greater" << nl;
    else if (a < b)
        cout << "b is Greater" << nl;
    else
        cout << "Both a & b are Equal" << nl;

    return 0;
}