
#include <stdio.h>

// TSRN
void printPrimeFactors(int n)
{
    int factor = 2;

    while (n > 1) {
        if (n % factor == 0) {
            printf("%d ", factor);
            n = n / factor;
        } else
            factor++;
    }
    printf("\n");
}

int main()
{
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    printPrimeFactors(n);

    return 0;
}