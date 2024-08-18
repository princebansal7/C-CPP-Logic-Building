/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

class SquareAndCallCounter {
    int count = 0;

public:
    int calSquare(int n)
    {
        count++;
        return n * n;
    }
    int squareCallCounter()
    {
        return count;
    }
};

int main()
{
    SquareAndCallCounter obj;
    cout << "Square is: " << obj.calSquare(12) << nl;
    cout << "Call counter: " << obj.squareCallCounter() << nl << nl;

    cout << "Square is: " << obj.calSquare(2) << nl;
    cout << "Call counter: " << obj.squareCallCounter() << nl << nl;

    cout << "Square is: " << obj.calSquare(121) << nl;
    cout << "Call counter: " << obj.squareCallCounter() << nl << nl;

    cout << "Square is: " << obj.calSquare(10) << nl;
    cout << "Call counter: " << obj.squareCallCounter() << nl << nl;

    return 0;
}