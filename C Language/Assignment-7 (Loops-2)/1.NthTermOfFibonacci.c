#include <stdio.h>

int main()
{
    int n, fTerm = 0, sTerm = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    // nth term of fibonacci series

    if (n == 1)
        printf("%dth term is: %d\n", n, fTerm);
    else if (n == 2)
        printf("%dth term is: %d\n", n, sTerm);
    else {
        int sum = 0;
        for (int i = 1; i <= n - 2; i++) {
            sum = fTerm + sTerm;
            fTerm = sTerm;
            sTerm = sum;
        }
        printf("%dth term is: %d\n", n, sum);
    }
    return 0;
}