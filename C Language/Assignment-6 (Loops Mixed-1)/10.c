#include <stdio.h>

int main()
{
    int n, reverse = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n) {
        int last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n /= 10;
    }
    printf("reverse is: %d\n", reverse);
    return 0;
}