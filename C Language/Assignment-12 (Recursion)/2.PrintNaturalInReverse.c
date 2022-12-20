#include <stdio.h>

void printNaturalReverse(int n)
{
    if (n == 0) {
        return;
    }
    printf("%d ", n);
    printNaturalReverse(n - 1);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printNaturalReverse(n);
    printf("\n");
    return 0;
}