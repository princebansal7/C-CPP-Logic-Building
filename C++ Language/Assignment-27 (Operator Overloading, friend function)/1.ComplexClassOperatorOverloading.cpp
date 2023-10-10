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

    // Operator Overloading:
    // (+, -, *), As complex numbers are not comparable, we con't do overloading of comparison operator (==)

    // 1.To understand the concept of instance member operator I am making this method: Like we make any normal function (we just replace function name 'add' by operator '+')
    Complex add(Complex& a)
    {
        Complex ans;
        ans.real = real + a.real;
        ans.imag = imag + a.imag;
        return ans;
    }

    // 2. Use 'operator' keyword as per C++ rules
    Complex operator+(Complex& a)
    {
        Complex ans;
        ans.real = real + a.real;
        ans.imag = imag + a.imag;
        return ans;
    }

    Complex operator-(Complex& a)
    {
        Complex ans;
        ans.real = real - a.real;
        ans.imag = imag - a.imag;
        return ans;
    }

    // Multiplication:
    // c1 = a + ib
    // c2 = x + iy
    // c1*c2 = (ax-by) + i(ay + bx)

    Complex operator*(Complex& a)
    {
        Complex ans;
        ans.real = (real * a.real - imag * a.imag);
        ans.imag = (real * a.imag + imag * a.real);
        return ans;
    }

    // Unary operator (-) overloaded:
    Complex operator-()
    {
        Complex ans;
        ans.real = -real;
        ans.imag = -imag;
        return ans;
    }
};

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
    Complex c3 = c1; // way-1 to call (Copy constructor gets invoked)
    c3.getComplexNum();
    Complex c4 = Complex(c2); // way-2 to call (not recommended though)
    c4.getComplexNum();
    Complex c5(c4); // way-3
    c5.getComplexNum();

    Complex sum = c1.add(c2); // c1 object called add() instance member method which takes c2 object as argument and add() method returns Complex's Object which is getting stored in sum object
    cout << "Addition is: ";
    sum.getComplexNum();

    sum = c1.operator+(c2); // way-1 to call instance member operator: (c1 object called operator+ which takes c2 object as argument and add() method returns Complex's Object which is getting stored in sum object)
    cout << "Addition is: ";

    sum.getComplexNum();
    sum = c1 + c2; // way-2 to call instance member operator: (c1 object called operator+  which takes c2 object as argument and add() method returns Complex's Object which is getting stored in sum object, we can directly call member operators which explicity writing 'operator' keyword [same like 'cout <<' or 'cin >>', as cin and cout objects calls insertion(<<) and extraction(>>)] member operator of their class)
    cout << "Addition is: ";
    sum.getComplexNum();

    c1.getComplexNum();
    c2.getComplexNum();
    c3.getComplexNum();
    cout << "Addition is: ";
    sum = c1 + c2 + c3; // OPERATOR CASCADING: c1 called operator+ with c2 as argument then their returned result obj called operator+ and passed c3 as argument => final result obj gets assigned in sum object
    sum.getComplexNum();

    Complex x(10, 20), y(5, 9);
    Complex sub = x - y; // Here operator -  is working as binary operator (as x object calls it and passes y object as argument => has '1 argument')
    cout << "Subtraction is: ";
    sub.getComplexNum();

    Complex n1(4, 5), n2(10, 20);
    Complex prod = n1 * n2;
    cout << "Multiplication is: ";
    prod.getComplexNum();

    Complex num1(6, 9);
    num1.getComplexNum();
    c2 = -num1; // here, operator - is working as unary operator as num1 object calls instance operator - with '0 arguments' and returns object which gets stored in c2 object
    // c2 = num1.operator-(); // Way-2 to write above line
    c2.getComplexNum();

    return 0;
}