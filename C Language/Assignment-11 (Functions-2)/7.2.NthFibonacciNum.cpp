#include <iostream>
using namespace std;
#define nl '\n'

// 0 1 1 2 3 5 8 13 21 34 55 89 144....

int NthfibonacciNum(int n)
{
    int fTerm = 0, sTerm = 1, ans;
    if (n == 1) {
        return fTerm;
    } else if (n == 2) {
        return sTerm;
    } else {
        int sum = 0;
        for (int i = 1; i <= n - 2; i++) {
            sum = fTerm + sTerm;
            fTerm = sTerm;
            sTerm = sum;
            ans = sum;
        }
    }
    return ans;
}

int main()
{
    int n;
    cout << "Enter Number: ";
    cin >> n;

    cout << NthfibonacciNum(n) << nl;
    return 0;
}