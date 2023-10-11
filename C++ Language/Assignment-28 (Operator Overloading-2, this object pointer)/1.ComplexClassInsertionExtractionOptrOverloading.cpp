/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Complex {
    int real, imag; // Instance member variables or Properties of object

public:
    // Constructor
    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }

    // Instance member functions or Methods (as they can change state of objects)

    void setComplexNum(int r, int i)
    {
        real = r;
        imag = i;
    }
    void getComplexNum()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << nl;
        else
            cout << real << " - " << (-imag) << "i" << nl;
    }

    friend istream& operator>>(istream&, Complex&);
    friend ostream& operator<<(ostream&, Complex);
};

istream& operator>>(istream& CIN, Complex& temp)
{
    cout << "Enter real & imaginary number value: ";
    CIN >> temp.real >> temp.imag;
    return CIN;
}

ostream& operator<<(ostream& COUT, Complex temp)
{
    if (temp.imag >= 0)
        COUT << temp.real << " + " << temp.imag << "i" << nl;
    else
        COUT << temp.real << " - " << (-temp.imag) << "i" << nl;
    return COUT;
}

int main()
{
    Complex c1;
    c1.setComplexNum(4, -9);
    c1.getComplexNum();

    Complex c2;
    cin >> c2;
    cout << c2;

    return 0;
}