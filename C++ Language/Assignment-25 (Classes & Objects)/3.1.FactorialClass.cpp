/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Factorial {
    int factorial;

public:
    int fact(int n)
    {
        if (n < 0) {
            cout << "-ve number not allowed ";
            return 0;
        }
        if (n == 0 || n == 1)
            return 1;
        factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        return factorial;
    }
};

int main()
{
    Factorial f;
    cout << f.fact(5) << nl;
    cout << f.fact(0) << nl;
    cout << f.fact(-1) << nl;
    cout << f.fact(1) << nl;
    cout << f.fact(3) << nl;
    cout << f.fact(9) << nl;
    return 0;
}