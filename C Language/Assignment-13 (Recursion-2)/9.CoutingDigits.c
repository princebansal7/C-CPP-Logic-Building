#include <stdio.h>

int countDigits(int n)
{
    if (n > 0) {
        return 1 + countDigits(n / 10);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        n = -n;
        int ans = countDigits(n);
        printf("Number of digits in %d is: %d\n", n, ans);
    } else if (n == 0) {
        printf("Number of digits in %d is: 1\n", n);
    } else {
        int ans = countDigits(n);
        printf("Number of digits in %d is: %d\n", n, ans);
    }

    return 0;
}