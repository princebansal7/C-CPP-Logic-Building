#include <stdio.h>

void printNfibonacci(int n)
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

    printNfibonacci(n);

    return 0;
}