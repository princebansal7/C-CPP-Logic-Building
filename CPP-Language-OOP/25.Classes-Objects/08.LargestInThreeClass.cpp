/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class LargestElement {
    int a, b, c, ans;

public:
    void setvalues(int x, int y, int z)
    {
        a = x;
        b = y;
        c = z;
    }
    void showValues()
    {
        cout << "a=" << a << " "
             << "b=" << b << " "
             << "c=" << c << nl;
    }
    void calLargest()
    {
        ans = a > b ? (a > c ? a : c) : (b > c ? b : c);
    }
    int showLargest()
    {
        return ans;
    }
};

int main()
{
    LargestElement obj1;
    obj1.setvalues(2, 34, 69);
    obj1.showValues();
    obj1.calLargest();
    cout << "Largest is: " << obj1.showLargest() << nl;
    return 0;
}