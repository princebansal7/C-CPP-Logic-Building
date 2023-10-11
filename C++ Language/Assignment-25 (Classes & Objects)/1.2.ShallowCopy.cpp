/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'
// if we don't make any constructor explicitly:
// => Compiler will automatically creates the following:
//    1. Default constructor
//    2. Copy constructor
//    3. Overloaded assignment operator (It does shallow copy)
//    4. Destructor

class Complex {

    int real;
    int imag;

public:
    Complex()
    {
        cout << "default constructor called" << nl;
    }
    Complex(Complex& X)
    {
        real = X.real;
        imag = X.imag;
        cout << "My Copy Constructor called" << nl;
    }

    Complex operator=(Complex& X)
    {
        real = X.real;
        imag = X.imag;
        cout << "Overloaded = operator called" << nl;
        return X;
    }
    void setComplex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }
    void showComplexNum()
    {
        cout << "Complex number: " << real << " + " << imag << "i" << nl;
    }
};

int main()
{
    Complex c1;
    c1.setComplex(2, 4);
    c1.showComplexNum();

    Complex c2 = c1; // shallow copy
    c2.showComplexNum();
    c2 = c1; // should do deep copy this way
    c2.showComplexNum();

    return 0;
}