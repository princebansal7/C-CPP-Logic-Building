#include <stdio.h>

void swap(int* ptrA, int* ptrB)
{
    int temp;
    temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main()
{
    int a, b;
    printf("Enter a & b: ");
    scanf("%d%d", &a, &b);

    printf("Before Swapping:\n");
    printf("a=%d b=%d", a, b);
    swap(&a, &b);
    printf("\nAfter Swapping:\n");
    printf("a=%d b=%d", a, b);

    printf("\n");
    return 0;
}