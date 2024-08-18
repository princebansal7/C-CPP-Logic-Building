#include <stdio.h>

// 0 1 1 2 3 5 8 13 21 34 55 89 144....

void printNfibonacciSeries(int n)
{
    int fTerm = 0, sTerm = 1;
    if (n == 1)
        printf("%d", fTerm);
    else if (n == 2)
        printf("%d %d", fTerm, sTerm);
    else {
        int sum = 0;
        printf("%d %d ", fTerm, sTerm);
        for (int i = 1; i <= n - 2; i++) {
            sum = fTerm + sTerm;
            fTerm = sTerm;
            sTerm = sum;
            printf("%d ", sum);
        }
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printNfibonacciSeries(n);

    return 0;
}