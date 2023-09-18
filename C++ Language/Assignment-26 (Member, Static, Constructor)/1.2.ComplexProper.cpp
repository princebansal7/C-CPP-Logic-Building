/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Complex {
    int real, imag;

public:
    // constructor overloading
    Complex()
    {
        real = 0;
        imag = 0;
    }
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    // member functions

    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    void showData()
    {
        // cout << "Real number: " << real << nl;
        // cout << "Imaginary number: " << imag << nl;
        if (imag >= 0)
            cout << "Complex number: " << real << " + " << imag << "i" << nl;
        else
            cout << "Complex number: " << real << " - " << (0 - imag) << "i" << nl;
    }

    Complex add(Complex& temp)
    {
        Complex x;
        x.real = temp.real + real;
        x.imag = temp.imag + imag;
        return x;
    }
    Complex operator+(Complex& temp) // operator overloading
    {
        Complex x;
        x.real = temp.real + real;
        x.imag = temp.imag + imag;
        return x;
    }
};

int main()
{
    Complex c1, c3;
    c1.setData(-6, -9);
    c1.showData();

    Complex c2(2, 6);
    c2.showData();

    // c3 = c1.add(c2);
    c3 = c1 + c2;
    c3.showData();

    return 0;
}