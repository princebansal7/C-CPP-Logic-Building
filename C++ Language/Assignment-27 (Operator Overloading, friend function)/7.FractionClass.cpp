/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Fraction {
private:
    int numerator, denominator;

public:
    Fraction(int n = 0, int d = 1)
    {
        numerator = n;
        if (d == 0) {
            cout << "denominator can't be 0" << nl;
            return;
        }
        denominator = d;
    }
    void setFraction(int n, int d = 1)
    {
        numerator = n;
        if (d == 0) {
            cout << "denominator can't be 0" << nl;
            return;
        }
        denominator = d;
    }

    void showFraction()
    {
        cout << numerator << "/" << denominator << nl;
    }

    Fraction operator++(int) // for post-increment
    {
        Fraction ans = *this;
        // ans.showFraction();
        numerator++;
        denominator++;
        if (denominator == 0)
            denominator = 1;
        return ans;
    }

    Fraction operator++() // for pre-increment
    {
        ++numerator;
        ++denominator;
        if (denominator == 0)
            denominator = 1;
        // (*this).showFraction();
        return *this;
    }

    // overloading insertion and extraction operator
    friend istream& operator>>(istream&, Fraction&);
    friend ostream& operator<<(ostream&, Fraction);
};

istream& operator>>(istream& din, Fraction& F)
{
    cout << "Enter numerator: ";
    din >> F.numerator;
    cout << "Enter denominator: ";
    din >> F.denominator;
    if (F.denominator == 0) {
        cout << "denominator can't be 0";
        F.denominator = 1;
    }
    return din;
}

ostream& operator<<(ostream& dout, Fraction F)
{
    dout << "Fraction is: ";
    dout << F.numerator << "/" << F.denominator << nl;
    return dout;
}

int main()
{
    Fraction f1;
    f1.setFraction(2, 3);
    f1.showFraction();

    Fraction f2(3, 0);
    f2.showFraction();

    f1++;
    f1.showFraction();

    f2.setFraction(5, 7);
    ++f2;
    f2.showFraction();

    cout << nl << "----After overloading >> and << operator:----" << nl << nl;
    Fraction f3(69, 2), f4;
    cin >> f4;
    cout << f3 << nl << f4 << nl; // call cascading

    return 0;
}