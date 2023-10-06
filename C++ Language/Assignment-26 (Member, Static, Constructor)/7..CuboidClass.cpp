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

    Cube(int l = 0, int b = 0, int h = 0)
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

    return 0;
}