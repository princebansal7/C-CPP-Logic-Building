#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    // sum of n even series
    for (int i = 1; i <= n; i++)
        sum += 2 * i;

    printf("Sum of %d terms is: %d\n", n, sum);

    printf("Sum of %d terms is: %d\n", n, n * (n + 1)); // way-2
    return 0;
}