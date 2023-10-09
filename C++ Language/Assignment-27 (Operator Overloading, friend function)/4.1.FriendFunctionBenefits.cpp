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

    // Overloading operator + for cases like c2 =  c1 + 69;
    Complex operator+(int val)
    {
        Complex ans;
        ans.real = real + val; // c1's real part + real value (as only real part gets added into real)
        ans.imag = imag;
        return ans;
    }

    // Overloading operator + for cases like c2 = 5 + c1; (Benefit of Friend fxn)
    // decalaration:
    friend Complex operator+(int, Complex);
};

// Defining friend function:

Complex operator+(int val, Complex temp)
{
    Complex ans;
    ans.real = temp.real + val;
    ans.imag = temp.imag;
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

    // Benefit-1:
    // Consider this example:
    // c2 = c1 + 5;  // Here we have to overload + operator such that c1 object calls it and passes int value as argument
    // Now, c1 i.e, object of complex class is calling it => we can make operator + as member function here
    c2 = c1 + 5;
    c2.getComplexNum();

    // But what if?
    // c2 = 5 + c1; // now 5 is calling operator + ?? => No, that's wrong
    // In this operator + is called and 2 arguments (int and Complex type [Order of arguments matters]) is passed
    // How can we fix this issue ?
    // we need to access Complex class member (private too) and also need to make the operator + function call work.
    // => Friend function comes to rescue !!!

    c2 = 5 + c1;
    c2.getComplexNum();

    /*

    Benefit-2 of friend functions:

    What if you want to access private members of 2 or more different classes ?

     - Simply declare an function as a friend function in all of them
     - Now, this friend function can access their private member using their corresponding
       objects (without modifying the orginal object's values)
    */

    // Benefit-3: Overloading or Insertion (<<) and Extraction (>>) operators for Custom classes
    //           can be do done using friend function so that we can display or set values of object
    //           using cin and cout objects
    // We will it's example in next file (4.2)

    return 0;
}