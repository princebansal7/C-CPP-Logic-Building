#include <stdio.h>

int main()
{
    int n, factorial = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    // Factorial of num

    for (int i = 1; i <= n; i++)
        factorial *= i;

    printf("factorial of %d is: %d\n", n, factorial);
    return 0;
}