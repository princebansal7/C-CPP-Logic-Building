/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Complex {
    int real, imag;

public:
    void setReal(int r)
    {
        real = r;
    }
    void setImag(int i)
    {
        imag = i;
    }
    void showReal()
    {
        cout << "Real number: " << real << nl;
    }
    void showImag()
    {
        cout << "Imaginary number: " << imag << nl;
    }
    void showComplexNum()
    {
        cout << "Complex number: " << real << " + " << imag << "i" << nl;
    }
};

int main()
{
    Complex c1;
    c1.setReal(10);
    c1.setImag(69);
    c1.showReal();
    c1.showImag();
    c1.showComplexNum();

    return 0;
}