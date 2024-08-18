/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Complex {
    int real, imag; // Instance member variables or Properties of object

public:
    // formal argument name same as instance member variable => name confict issue as compiler will give priority to local variables
    // inside their scope => using 'this' we can resolve this issue.

    // 'this' is a local object pointer in every instance member function (=> Obviously inside Constructors & destructors too)
    // => it contains caller object's reference.

    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }

    void setComplexNum(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    void getComplexNum()
    {
        // this->real == real (as same as c1.real == this->real )
        if (imag >= 0)
            cout << this->real << " + " << this->imag << "i" << nl;
        else
            cout << real << " - " << (-imag) << "i" << nl;
    }
};

int main()
{
    Complex c1(1, 4);
    c1.getComplexNum();
    c1.setComplexNum(1, 9);
    c1.getComplexNum();

    return 0;
}