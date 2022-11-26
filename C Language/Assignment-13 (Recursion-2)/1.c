#include <stdio.h>

int sumOfN(int n)
{
    if (n == 0)
        return 0;

    return n + sumOfN(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int ans = sumOfN(n);

    printf("Sum is: %d\n", ans);
    return 0;
}