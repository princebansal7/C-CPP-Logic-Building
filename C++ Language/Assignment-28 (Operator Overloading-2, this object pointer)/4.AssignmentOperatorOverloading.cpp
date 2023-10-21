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

    // With this: call cascading isn't possible

    // void operator=(Complex &X)
    // {
    //     this->real = X.real;
    //     this->imag = X.imag;
    // }

    // we are explicitly overloading = operator such that call cascading is possible

    Complex& operator=(Complex& X)
    {
        this->real = X.real;
        this->imag = X.imag;
        return *this;
    }
};

int main()
{
    Complex c1;
    c1.setComplexNum(4, -9);
    c1.getComplexNum();

    Complex c2, c3;
    c3 = c2 = c1; // c2 calls assignment operator with c1 as argument then c3 calls it with returned result as an argument
    c2.getComplexNum();
    c3.getComplexNum();

    return 0;
}