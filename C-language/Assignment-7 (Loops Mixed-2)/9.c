#include <stdio.h>

int powr(int ld, int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * ld;
    }
    return ans;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int temp = n;
    int digits = 0, sum = 0;

    while (temp) {
        digits++;
        temp /= 10;
    }
    temp = n;

    while (temp) {
        int last_digit = temp % 10;
        sum += powr(last_digit, digits);
        temp /= 10;
    }

    if (sum == n) {
        printf("%d is Armstrong number\n", n);
    } else {
        printf("%d is Not Armstrong number\n", n);
    }

    return 0;
}