/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class Box {
private:
    int length, breadth, height;

public:
    // As not making default constructor explicitly , use default arguments

    Box(int l = 0, int b = 0, int h = 0)
    {
        length = l;
        breadth = b;
        height = h;
    }
    // setters

    void setLength(int l)
    {
        length = l;
    }
    void setBreadth(int b)
    {
        breadth = b;
    }
    void setHeight(int h)
    {
        height = h;
    }

    void setDimensions(int length, int breadth, int height)
    {
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    }

    // getters

    int getLength()
    {
        return length;
    }
    int getBreadth()
    {
        return breadth;
    }
    int getHeight()
    {
        return height;
    }

    void showDimensions()
    {
        cout << "Length: " << length << nl;
        cout << "Breadth: " << breadth << nl;
        cout << "Height: " << height << nl;
    }

    // Method

    int getVolume()
    {
        return length * breadth * height;
    }
};

int main()
{
    Box b1;
    b1.setLength(2);
    b1.setBreadth(3);
    b1.setHeight(5);
    b1.showDimensions();
    cout << "Length, Breadth and Height is: " << b1.getLength() << "," << b1.getBreadth() << " & " << b1.getHeight() << nl;
    cout << "Volume of b1: " << b1.getVolume() << nl << nl;
    Box b2;
    b2.setDimensions(4, 6, 3);
    cout << "Volume of b2: " << b2.getVolume() << nl << nl;

    Box b3(10, 30, 2);
    b3.showDimensions();
    cout << "Volume of b3: " << b3.getVolume() << nl << nl;

    return 0;
}