/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class ReverseNum {
    int reverseNum;

public:
    int reverse(int n)
    {
        reverseNum = 0;
        while (n) {
            int ld = n % 10;
            reverseNum = ld + reverseNum * 10;
            n = n / 10;
        }
        return reverseNum;
    }
};

int main()
{
    ReverseNum obj;
    cout << "Reverse is: " << obj.reverse(10) << nl;
    cout << "Reverse is: " << obj.reverse(902) << nl;
    cout << "Reverse is: " << obj.reverse(121) << nl;
    cout << "Reverse is: " << obj.reverse(1889002) << nl;
    return 0;
}