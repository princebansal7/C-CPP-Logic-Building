#include <stdio.h>

void printEven(int n)
{
    if (n == 0) {
        return;
    }
    printEven(n - 1);
    printf("%d ", 2 * n);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printEven(n);
    printf("\n");
    return 0;
}