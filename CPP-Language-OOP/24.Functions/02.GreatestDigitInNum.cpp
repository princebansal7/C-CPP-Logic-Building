/*
    @author: princebansal_
*/

#include <climits>
#include <iostream>
using namespace std;
#define nl '\n'

int checkHighestDigit(int n)
{
    int maxDigit = INT_MIN;
    while (n) {
        int ld = n % 10;
        if (maxDigit < ld)
            maxDigit = ld;
        n /= 10;
    }
    return maxDigit;
}

int main()
{
    int n;
    cin >> n;
    int ans = checkHighestDigit(n);
    cout << "Highest digit in " << n << " is: " << ans << nl;
    return 0;
}