#include <stdio.h>

// TSRN
void printN_Natural(int n)
{
    printf("First %d natural numbers are:\n", n);
    for (int i = 1; i <= n; i++)
        printf("%d ", i);
    printf("\n");
}
int main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d", &n);

    printN_Natural(n);
    return 0;
}