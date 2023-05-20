/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Complex {
    int real, imag;

public:
    void setData(int r, int i)
    {
        real = r;
        imag = i;
    }
    void showData()
    {
        cout << "Real number: " << real << nl;
        cout << "Imaginary number: " << imag << nl;
        cout << "Complex number: " << real << " + " << imag << "i" << nl;
    }

    Complex add(Complex& temp)
    {
        Complex x;
        x.real = temp.real + real;
        x.imag = temp.imag + imag;
        return x;
    }
};

int main()
{
    Complex c1, c2, c3;
    c1.setData(6, 9);
    c1.showData();

    c2.setData(2, -4);
    c2.showData();

    c3 = c1.add(c2);
    c3.showData();

    return 0;
}