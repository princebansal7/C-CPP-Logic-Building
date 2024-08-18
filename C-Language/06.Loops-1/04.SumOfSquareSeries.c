#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    // sum of n^2 series
    for (int i = 1; i <= n; i++)
        sum += (i * i);

    printf("Sum of %d terms is: %d\n", n, sum);
    return 0;
}