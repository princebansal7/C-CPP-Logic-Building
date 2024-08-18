#include <stdio.h>

void printEvenReverse(int n)
{
    if (n == 0) {
        return;
    }
    printf("%d ", 2 * n);
    printEvenReverse(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printEvenReverse(n);
    printf("\n");
    return 0;
}