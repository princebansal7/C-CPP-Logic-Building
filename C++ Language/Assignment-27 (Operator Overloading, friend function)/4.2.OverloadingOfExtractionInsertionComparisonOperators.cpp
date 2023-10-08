#include <iostream>
using namespace std;
#define nl '\n'

/*
        Understanding: (Also this a Benefit-3 of friend Functions)
        We know:
        int x;
        cin >> x; (here, cin object calls extraction operator where 'reference' of variable x is passed)
                  (Why reference ? => That's the reason who defined extraction operator is able to modify variable's value)

        Now when we do:-
            cin >> t1; // ERROR (as Extraction operator (>>) is not overloaded to take Custom objects as input)
                =>  Here, cin object of istream class is calling extraction operator which takes t1 object as argument


            cout << t1; // ERROR (as Insertion operator (<<) is not overloaded to take Custom objects as output)
                =>  Here, cout object of ostream class is calling insertion operator which takes t1 object as argument

        How to Fix ?
        Possible thoughts you might have:-

            Way-1: Define another overloaded version of >> and << in istream and ostream class respectively, so that
                   they can work for Time's objects
                Issues:
                   - ostream and istream are pre-defined classes so we can't modify them
                   - There can be infinite custom classes objects => we won't be overloading insertion,
                     extraction operator for all of them right ? that's stupid ! => way-1 is dead-end

            Way-2: Make >> and << friend function of istream and ostream class respectively.
                Issues:
                   - Can't do this too, as we can't declared them in istream and ostream class as they are pre-defined.
                   - >> and << are member operators and friend functions can't be members
                   - Here, we don't need to access private members of istream and ostream classes, which kinda main
                     reason of using friend function.
                    Hence, Way-2 also Dead-end!

            Way-3: Here, we want to access private members of Time class, to print or modify them.
                   - So, what if we can make >> and << 'member operator' of Time class.
                         but then to call these member operator we need Time's objects, but here istream and
                         ostream class's objects are calling them.
                         cin >> t1;
                         cout << t1;

                   - Solution:
                         We make >> and << operators as friend function of Time class => they can access private members
                         of Time class too (which we want)

                         This way when we write:
                         cin >> t1; => '>>' operator is being called where cin object's reference and
                                          t1 object's reference is being passed as argument

                         cout << t1; => '<<' operator is being called where cout object's reference and
                                          t1 object's is being passed as argument (not t1's reference as we just want to print it
                                          and not modify it)


    */

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

    // Overloading == operator

    bool operator==(Time T)
    {
        if (hours == T.hours && minutes == T.minutes && seconds == T.seconds)
            return true;
        return false;
    }

    // Declaring ostream class's operator << as friend function
    friend ostream& operator<<(ostream&, Time);

    // Declaring istream class's operator >> as friend function
    friend istream& operator>>(istream&, Time&);
};

// Defining << operator
ostream& operator<<(ostream& tempOut, Time T)
{
    tempOut << "Hours: " << T.hours << nl;
    tempOut << "Minutes: " << T.minutes << nl;
    tempOut << "Seconds: " << T.seconds << nl;
    return tempOut;
}

// Defining >> operator
istream& operator>>(istream& tempIn, Time& T)
{
    cout << "Enter Hours: ";
    tempIn >> T.hours;
    cout << "Enter Minutes: ";
    tempIn >> T.minutes;
    cout << "Enter Seconds: ";
    tempIn >> T.seconds;

    return tempIn;
}

int main()
{
    Time t1(10, 45, 30);
    Time t2(10, 45, 30);

    t1.showTime();
    t2.showTime();

    if (t1 == t2)
        cout << "Times are Same!" << nl;
    else
        cout << "Times are Different!" << nl;

    // Ater overlaoding them using friend function concept:

    Time time1;
    cin >> time1;
    cout << time1;

    return 0;
}
