#include <stdio.h>

// TSRN
void printN_Odd(int n)
{
    printf("First %d Odd numbers are:\n", n);
    for (int i = 1; i <= n; i++)
        printf("%d ", 2 * i - 1);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printN_Odd(n);

    return 0;
}