#include <stdio.h>

void printSquares(int n)
{
    if (n == 0) {
        return;
    }
    printSquares(n - 1);
    printf("%d ", n * n);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printSquares(n);
    printf("\n");
    return 0;
}