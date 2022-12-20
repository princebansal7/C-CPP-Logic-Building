/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

// Check given number exists in Fibonacci series or not

bool check(int n)
{
    int flag = 0, fTerm = 0, sTerm = 1;
    int sum = 0;
    if (n == 0)
        flag = 1;
    else {
        for (int i = 1; i <= n; i++) {
            sum = fTerm + sTerm;
            if (n == sum) {
                flag = 1;
                break;
            } else if (sum > n) {
                flag = 0;
                break;
            }
            fTerm = sTerm;
            sTerm = sum;
        }
    }
    if (flag == 1)
        return true;
    return false;
}

int main()
{

    int n;
    cout << "Enter Number: ";
    cin >> n;

    if (check(n))
        cout << n << " exits in Fibonacci series" << nl;
    else
        cout << n << " doesn't exits" << nl;
    return 0;
}