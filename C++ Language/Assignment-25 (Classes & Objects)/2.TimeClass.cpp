/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Time {
    int hr, min, sec;

public:
    // we did data security using setter
    void setTime(int h, int m, int s)
    {
        m = m + s / 60;
        s = s % 60;
        h = h + m / 60;
        m = m % 60;
        // for 24 hr format
        h = h % 24;
        // now putting values of local variables (with normalized time) in member variables
        sec = s;
        min = m;
        hr = h;
    }

    void showTime()
    {
        cout << "\nTime is: ";
        cout << hr << " hr " << min << " min " << sec << " sec\n"
             << nl;
    }
};

int main()
{
    Time t;
    t.setTime(12, 65, 62);
    t.showTime();

    return 0;
}