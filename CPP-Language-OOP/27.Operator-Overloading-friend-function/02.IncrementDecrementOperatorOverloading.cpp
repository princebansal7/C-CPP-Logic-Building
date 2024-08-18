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

    // Unary operator (-) overloaded:
    Complex operator-()
    {
        Complex ans;
        ans.real = -real;
        ans.imag = -imag;
        return ans;
    }

    // // Overloading the pre increment and decrement
    // void operator++()
    // {
    //     (this->real)++;
    //     (this->imag)++;
    // }

    // void operator--()
    // {
    //     (this->real)--;
    //     (this->imag)--;
    // }

    // // Overloading the post increment and decrement (specifying int as argument lets compiler differentiate that postfix one's is called)
    // void operator++(int)
    // {
    //     (this->real)++;
    //     (this->imag)++;
    // }

    // void operator--(int)
    // {
    //     (this->real)--;
    //     (this->imag)--;
    // }

    // Pre ++ operator overloaded
    Complex& operator++()
    {
        this->real++;
        this->imag++;
        return *this; // Return a reference to the modified object
    }

    // Pre -- operator overloaded
    Complex& operator--()
    {
        this->real--;
        this->imag--;
        return *this; // Return a reference to the modified object
    }

    // Post ++ operator overloaded
    Complex operator++(int)
    {
        Complex old = *this; // Create a copy of the current object
        this->real++;
        this->imag++;
        return old; // Return the old value
    }

    // Post -- operator overloaded
    Complex operator--(int)
    {
        Complex old = *this; // Create a copy of the current object
        this->real--;
        this->imag--;
        return old; // Return the old value
    }
};

int main()
{
    Complex c1;
    c1.setReal(10);
    c1.setImag(-9);
    cout << "c1 Before:" << endl;
    c1.getComplexNum();

    ++c1; // Pre-increment
    cout << "c1 After Pre-Increment:" << endl;
    c1.getComplexNum();

    --c1; // Pre-decrement
    cout << "c1 After Pre-Decrement:" << endl;
    c1.getComplexNum();

    Complex c2(2, 3);
    cout << "c2 Before:" << endl;
    c2.getComplexNum();

    c2++; // Post-increment
    cout << "c2 After Post-Increment:" << endl;
    c2.getComplexNum();

    c2--; // Post-decrement
    cout << "c2 After Post-Decrement:" << endl;
    c2.getComplexNum();

    return 0;
}