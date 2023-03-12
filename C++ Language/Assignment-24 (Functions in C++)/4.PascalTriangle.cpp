/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= i;

    return ans;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void PascalTriangle(int n)
{
    int space = n;
    for (int i = 0; i <= n; i++) {
        for (int k = 1; k <= space; k++) {
            cout << " ";
        }
        space--;
        for (int j = 0; j <= i; j++) {
            cout << nCr(i, j) << " ";
        }
        cout << nl;
    }
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    PascalTriangle(n);
    return 0;
}