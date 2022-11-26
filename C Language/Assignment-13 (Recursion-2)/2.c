#include <stdio.h>

int sumOfEven(int n)
{
    if (n == 0)
        return 0;
    return 2 * n + sumOfEven(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int ans = sumOfEven(n);

    printf("Sum 1st %d even numbers is: %d\n", n, ans);
    return 0;
}