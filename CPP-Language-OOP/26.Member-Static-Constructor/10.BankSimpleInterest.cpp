/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Bank {
private:
    int year;
    double principle;
    double rateOfInterest;

public:
    Bank(double p = 0, double r = 0, int y = 0)
    {
        year = y;
        principle = p;
        rateOfInterest = r;
    }

    void showDetails()
    {
        cout << "Principle amount: " << principle << nl;
        cout << "Rate of Interest: " << rateOfInterest << "%" << nl;
        cout << "Year: " << year << nl;
    }

    double getSimpleInterest()
    {
        return (principle * rateOfInterest * (double)year) / 100;
    }
};

int main()
{
    Bank b1(1000, 15.5, 2);
    b1.showDetails();
    cout << "Simple Interest: " << b1.getSimpleInterest() << nl;

    return 0;
}