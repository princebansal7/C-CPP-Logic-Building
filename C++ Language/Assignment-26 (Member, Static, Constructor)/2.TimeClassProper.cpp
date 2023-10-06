#include <iostream>
using namespace std;
#define nl '\n'
class Time {
private:
    int hours, minutes, seconds;

public:
    // Constructor to initialize the time
    Time(int hr = 0, int min = 0, int sec = 0)
    {
        setTime(hr, min, sec);
    }

    // Set the time
    void setTime(int hr, int min, int sec)
    {
        hours = hr;
        minutes = min;
        seconds = sec;
    }

    // Display the time in HH:MM:SS format
    void showTime()
    {
        cout << "Time: ";
        if (hours < 10)
            cout << "0";
        cout << hours << ":";
        if (minutes < 10)
            cout << "0";
        cout << minutes << ":";
        if (seconds < 10)
            cout << "0";
        cout << seconds << nl;
    }

    // Normalize the time (convert any overflowed seconds/minutes to hours)
    void normalize()
    {
        minutes += seconds / 60;
        seconds %= 60;
        hours += minutes / 60;
        minutes %= 60;
        hours %= 12; // for 12 hr format (if want 24 hr format then use h%=24;)
    }

    // Add two Time objects and return the result
    Time add(Time& otherTime)
    {
        Time result;
        result.hours = hours + otherTime.hours;
        result.minutes = minutes + otherTime.minutes;
        result.seconds = seconds + otherTime.seconds;
        result.normalize();
        return result;
    }
};

int main()
{
    Time t1(10, 45, 30); // Create a Time object with initial values
    Time t2(3, 20, 45); // Create another Time object

    // Display the initial times
    t1.showTime();
    t2.showTime();

    // Add t1 and t2
    Time sum = t1.add(t2);

    // Display the sum of times
    sum.showTime();

    return 0;
}
