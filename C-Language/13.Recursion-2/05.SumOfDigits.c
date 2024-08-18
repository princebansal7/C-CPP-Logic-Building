#include <stdio.h>

int sumOfDigits(int n)
{
    if (n == 0)
        return 0;

    int ld = n % 10;
    return ld + sumOfDigits(n / 10);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int ans = sumOfDigits(n);

    printf("Sum of digits of %d is: %d\n", n, ans);
    return 0;
}