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
        // for hour
        if (h >= 24) {
            hr = h % 24;
        } else if (h >= 0) {
            hr = h;
        } else {
            hr = 0;
        }
        // for minute
        if (m >= 60) {
            hr++;
            min = m % 60;
        } else if (m >= 0) {
            min = m;
        } else {
            min = 0;
        }
        // for seconds
        if (s >= 60) {
            min++;
            sec = s % 60;
        } else if (s >= 0) {
            sec = s;
        } else {
            sec = 0;
        }
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
    t.setTime(-25, -55, -32);
    t.showTime();

    return 0;
}