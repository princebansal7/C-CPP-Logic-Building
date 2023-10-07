#include <iostream>
using namespace std;
#define nl '\n'

void getSumAndProd(int a, int b, int* sum, int* prod)
{
    // Not literally returning multiple values
    // But just manipulating them using pointer outside of their scope (in another function)
    *sum = a + b;
    *prod = a * b;
}

int main()
{
    int a, b, SUM, PROD;
    cout << "Enter a and b value: ";
    cin >> a >> b;

    getSumAndProd(a, b, &SUM, &PROD);

    cout << "Sum of a & b is: " << SUM << nl;
    cout << "Product of a & b is: " << PROD << nl;

    cout << nl;
    return 0;
}