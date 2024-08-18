#include <stdio.h>

int main()
{
    int n, flag = 0, fTerm = 0, sTerm = 1;
    printf("Enter number: ");
    scanf("%d", &n);

    int sum = 0;
    if (n == 0)
        flag = 1;
    else {
        for (int i = 1; i <= n; i++) {
            sum = fTerm + sTerm;
            if (n == sum) {
                flag = 1;
                break;
            } else if (sum > n) {
                flag = 0;
                break;
            }
            fTerm = sTerm;
            sTerm = sum;
        }
    }
    if (flag == 1)
        printf("\n%d exists in Fibonacci series\n", n);
    else
        printf("\n%d doesn't exists\n", n);
    printf("\n");
    return 0;
}