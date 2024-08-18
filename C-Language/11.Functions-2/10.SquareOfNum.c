#include <stdio.h>

int square(int n)
{
    return n * n;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Square of %d is: %d\n", n, square(n));

    return 0;
}
