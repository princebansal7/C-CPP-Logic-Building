/*
    @author: princebansal_
*/

#include <iostream>
using namespace std;
#define nl '\n'

int main()
{
    int arr[10];
    cout << "Enter 10 numbers: " << nl;

    // for (int i = 0; i < 10; i++)
    //     cin >> arr[i];

    for (int& x : arr)
        cin >> x;

    int sum = 0;
    for (int x : arr)
        sum += x;

    cout << "Sum is: " << sum << nl;

    return 0;
}