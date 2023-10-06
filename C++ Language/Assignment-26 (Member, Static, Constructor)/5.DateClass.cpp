/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Date {
private:
    int day, month, year;

public:
    Date(int d = 1, int m = 1, int y = 1900)
    {
        day = d;
        month = m;
        year = y;
    }

    void setDate(int d, int m, int y)
    {
        if (d > 0 && m > 0 && y > 0) {
            day = d;
            month = m;
            year = y;
        }
        cout << "Invalid Date" << nl;
    }

    void showDate()
    {
        if (day < 10)
            cout << "0";
        cout << day << "/";
        if (month < 10)
            cout << "0";
        cout << month << "/";

        cout << year << nl;
    }
};

int main()
{
    Date d1(19, 3, 1998), d2;
    d1.showDate();
    d2.showDate();
    d2.setDate(15, 8, 1947);
    d2.showDate();
    d2.setDate(-2, 4, 1999);
    d2.showDate();

    return 0;
}