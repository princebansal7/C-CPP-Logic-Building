#include <stdio.h>

int sumOfOdd(int n)
{
    if (n == 0)
        return 0;
    return (2 * n - 1) + sumOfOdd(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int ans = sumOfOdd(n);

    printf("Sum 1st %d Odd numbers is: %d\n", n, ans);
    return 0;
}