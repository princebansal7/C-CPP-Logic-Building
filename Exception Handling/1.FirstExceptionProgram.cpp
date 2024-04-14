/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
    int a, b, res = -1;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    try {
        if (b == 0)
            throw "Divide by Zero Exception";
        if (b == 69)
            throw exception();

        res = a / b;
    } catch (const char* s) {
        cout << s << nl;
    } catch (...) {
        cout << "Default Exception" << nl;
    }
    cout << "Result: " << res << nl;
    return 0;
}