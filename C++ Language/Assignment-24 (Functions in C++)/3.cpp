/*
    @author: princebansal_
*/

#include <climits>
#include <iostream>
using namespace std;
#define nl '\n'

int power(int x, int y)
{
    int ans = 1;
    for (int i = 1; i <= y; i++) {
        ans = ans * x;
    }
    return ans;
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << x << "^" << y << " = " << power(x, y) << nl;
    return 0;
}