#include <stdio.h>

void printNatural(int n)
{
    if (n == 0) {
        return;
    }
    printNatural(n - 1);
    printf("%d ", n);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printNatural(n);
    printf("\n");
    return 0;
}