#include <stdio.h>

// TSRS
int checkEvenOdd(int n)
{
    if (n & 1)
        return 0;
    return 1;
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    if (checkEvenOdd(n))
        printf("Even number\n");
    else
        printf("Odd number\n");
    return 0;
}