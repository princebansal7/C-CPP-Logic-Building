/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Factorial {
    int factorial, num;

public:
    // use proper setter and getter
    void setN(int val)
    {
        if (val < 0) {
            cout << "-ve number not allowed " << nl;
            return;
        }
        num = val;
    }
    int getN()
    {
        return num;
    }

    int getFact()
    {
        return factorial;
    }

    void calfactorial()
    {
        int ans = 1;
        if (num == 0 || num == 1) {
            factorial = 1;
            return;
        }

        for (int i = 1; i <= num; i++) {
            ans *= i;
        }
        factorial = ans;
    }
};

int main()
{
    Factorial f1, f2;
    f1.setN(5);
    f1.calfactorial();
    cout << "Factorial of " << f1.getN() << " is: " << f1.getFact() << nl;

    f1.setN(-5);
    f1.calfactorial();
    cout << "Factorial of " << f1.getN() << " is: " << f1.getFact() << nl;

    f2.setN(9);
    f2.calfactorial();
    cout << "Factorial of " << f2.getN() << " is: " << f2.getFact() << nl;
    return 0;
}