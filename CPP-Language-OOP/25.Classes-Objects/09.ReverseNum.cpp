/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class ReverseNum {
    int num = 0;
    int reverseNum = 0;

public:
    void setN(int n)
    {
        num = n;
    }
    int getN()
    {
        return num;
    }
    void calReverse()
    {
        int ans = 0;
        int n = getN();
        while (n) {
            int ld = n % 10;
            ans = ld + ans * 10;
            n = n / 10;
        }
        reverseNum = ans;
    }
    int getReverse()
    {
        return reverseNum;
    }
};

int main()
{
    ReverseNum obj1, obj2;
    obj1.setN(283);
    obj1.calReverse();
    cout << "Reverse of " << obj1.getN() << " is: " << obj1.getReverse() << nl;

    obj2.setN(28300700);
    obj2.calReverse();
    cout << "Reverse of " << obj2.getN() << " is: " << obj2.getReverse() << nl;
    return 0;
}