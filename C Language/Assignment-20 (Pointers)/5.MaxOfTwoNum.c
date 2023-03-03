#include <stdio.h>

int getMax(int* x, int* y)
{
    return (*x > *y) ? *x : *y;
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int max = getMax(&a, &b);

    printf("Maximum is: %d", max);

    printf("\n");
    return 0;
}