/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Complex {
    int real, imag;

public:
    // Constructor
    Complex(int real = 0, int imag = 0)
    {
        this->real = real;
        this->imag = imag;
    }

    // Copy Constructor
    Complex(Complex& C)
    {
        real = C.real;
        imag = C.imag;
    }

    // Setter & getters
    void setReal(int r)
    {
        real = r;
    }
    void setImag(int i)
    {
        imag = i;
    }
    void getReal()
    {
        cout << "Real number: " << real << nl;
    }
    void getImag()
    {
        cout << "Imaginary number: " << imag << nl;
    }
    void getComplexNum()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << nl;
        else
            cout << real << " - " << (-imag) << "i" << nl;
    }

    // 1.Declaring operator+ as a friend (making binary operator as friend)
    // => now operator+ must not be instance member as it's a friend fxn
    // => meaning of operator+ call is now changed as now it's not an member function
    friend Complex operator+(Complex, Complex);

    // Declaring binary operator -
    friend Complex operator-(Complex, Complex);

    // 2.Declaring operator- as a friend (making unary operator as friend)
    friend Complex operator-(Complex);
};

// Defining friend function outside of class to which it is friend
// (IMPORTANT)
// NOTE: x, y objects are copies of c1 & c2 objects and operator+ is a friend function so
//       it can access private members of class using x, y objects but modification in original
//       object values is not allowed => if we defined like as below:
//
//     Complex operator+(Complex &x, Complex &y){...}  // will give error as one can modify the real object as refence is being passed
//     To fix:
//     Complex operator+(Complex x, Complex y){...} // pass copies, so can't modify original values
//                   or
//     Complex operator+(const Complex &x, const Complex &y){...} // make them const => can't modify them

Complex operator+(Complex x, Complex y)
{
    Complex ans;
    ans.real = x.real + y.real;
    ans.imag = x.imag + y.imag;
    return ans;
}

// Defining binary operator -
Complex operator-(Complex x, Complex y)
{
    Complex ans;
    ans.real = x.real - y.real;
    ans.imag = x.imag - y.imag;
    return ans;
}

// Defining unary operator- using friend fxn concept
Complex operator-(Complex x)
{
    Complex ans;
    ans.real = -x.real;
    ans.imag = -x.imag;
    return ans;
}

int main()
{
    Complex c1;
    c1.setReal(10);
    c1.setImag(-9);
    c1.getReal();
    c1.getImag();
    c1.getComplexNum();

    Complex c2(2, 3);
    c2.getComplexNum();

    Complex sum = c1 + c2; // + operator is called and c1, c2 objects are being passed as arguments (That's how making method as friend changes the meaning of function call)
    cout << "Sum is: ";
    sum.getComplexNum();

    c2 = -c1; // - operator is called and c1 object is passed as argument (That's how making method as friend changes the meaning of function call)
    c2.getComplexNum();

    Complex sub = c2 - c1; // -operator is called and c1, c2 objects are being passed as arguments (Tha's how...........)
    cout << "Subtraction is: ";
    sub.getComplexNum();

    return 0;
}