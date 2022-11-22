#include <stdio.h>

int main()
{
    int n, fTerm = 0, sTerm = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    // fibonacci series till n terms

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
    return 0;
}