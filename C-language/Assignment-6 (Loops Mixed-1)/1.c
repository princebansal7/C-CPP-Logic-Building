#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        sum += i;

    printf("Sum of %d terms is: %d\n", n, sum);

    // printf("Sum of %d terms is: %d\n", n, n * (n + 1) / 2); // way-2
    return 0;
}