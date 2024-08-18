/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
    int a, b, c;
    cout << "Enter 3 sides: ";
    cin >> a >> b >> c;
    int volume = a * b * c;
    cout << "Volume of Cuboid is: " << volume << endl;
    return 0;
}