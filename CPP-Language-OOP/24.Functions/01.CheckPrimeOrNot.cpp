/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

bool checkPrime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if (checkPrime(n))
        cout << "Prime number" << nl;
    else
        cout << "Not Prime number" << nl;
    return 0;
}