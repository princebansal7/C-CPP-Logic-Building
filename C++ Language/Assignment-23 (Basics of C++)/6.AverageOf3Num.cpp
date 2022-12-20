/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
    int a, b, c;
    cout << "Enter 3 numbers: ";
    cin >> a >> b >> c;
    float Average = (float)(a + b + c) / 3;
    cout << "Average of 3 numbers is: " << Average << endl;
    return 0;
}