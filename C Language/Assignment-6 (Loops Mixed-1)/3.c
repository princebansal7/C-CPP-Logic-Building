#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    // sum of n odd series
    for (int i = 0; i < n; i++)
        sum += (2 * i + 1);

    printf("Sum of %d terms is: %d\n", n, sum);

    printf("Sum of %d terms is: %d\n", n, n * n); // way-2
    return 0;
}