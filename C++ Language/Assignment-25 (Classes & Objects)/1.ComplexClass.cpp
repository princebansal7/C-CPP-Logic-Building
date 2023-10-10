/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Complex {

    int real;
    int imag; // if we want to decalre it outside the class, we can't

public:
    // instance member functions/methods:
    // setters
    void setReal(int r)
    {
        real = r;
    }
    void setImag(int i)
    {
        imag = i;
    }

    // getters
    void showReal()
    {
        cout << "Real number: " << real << nl;
    }
    void showImag()
    {
        cout << "Imaginary number: " << imag << nl;
    }

    // if we want to define member functions or operators outside the class ? 1st declare them inside the class the define outside using proper syntax
    // void showComplexNum()
    // {
    //     cout << "Complex number: " << real << " + " << imag << "i" << nl;
    // }

    void showComplexNum(); // declaring
};

// defining member function outside the class

void Complex::showComplexNum()
{
    cout << "Complex number: " << real << " + " << imag << "i" << nl;
}

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