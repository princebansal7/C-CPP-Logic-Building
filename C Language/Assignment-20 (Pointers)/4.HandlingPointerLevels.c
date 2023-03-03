#include <stdio.h>

int main()
{
    int n;
    int *a = NULL, **b = NULL, ***c = NULL;

    printf("Enter value: ");
    scanf("%d", &n);

    a = &n; // level 1 pointer
    b = &a; // level 2 pointer
    c = &b; // level 3 pointer

    // This means:
    //              n <- a <- b <- c

    printf("value of n: %d - %d - %d - %d\n", n, *a, **b, ***c);
    printf("address of n: %p - %p - %p - %p\n", &n, a, *b, **c);
    printf("address of a: %p - %p - %p\n", a, *b, **c);
    printf("address of b: %p - %p\n", &b, c);
    printf("address of c: %p", &c);

    printf("\n");
    return 0;
}