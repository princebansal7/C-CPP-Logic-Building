#include <stdio.h>

void printOddReverse(int n)
{
    if (n == 0) {
        return;
    }
    printf("%d ", 2 * n - 1);
    printOddReverse(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printOddReverse(n);
    printf("\n");
    return 0;
}