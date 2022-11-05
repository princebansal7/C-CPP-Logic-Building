
#include <stdio.h>

// TSRS
int checkDigit(int n, int d)
{
    while (n) {
        int ld = n % 10;
        if (ld == d)
            return 1;
        n /= 10;
    }
    return 0;
}

int main()
{
    int n, d;
    printf("Enter Number and Digit: ");
    scanf("%d%d", &n, &d);

    if (checkDigit(n, d))
        printf("%d has the given digit\n", n);
    else
        printf("%d didn't have the given digit\n", n);

    return 0;
}