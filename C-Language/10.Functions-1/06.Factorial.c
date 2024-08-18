#include <stdio.h>

// TSRS
int factorial(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * i;
    return ans;
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printf("Factorial of %d is: %d\n", n, factorial(n));

    return 0;
}