#include <stdio.h>

int sumOfSquares(int n)
{
    if (n == 0)
        return 0;
    return n * n + sumOfSquares(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int ans = sumOfSquares(n);

    printf("Sum of Squares of first %d numbers is: %d\n", n, ans);
    return 0;
}