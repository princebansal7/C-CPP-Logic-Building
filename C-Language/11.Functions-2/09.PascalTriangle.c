#include <stdio.h>

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= i;

    return ans;
}

int nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

void PascalTriangle(int n)
{
    int space=n;
    for (int i = 0; i <= n; i++) {
        for(int k=1;k<=space;k++){
            printf(" ");
        }
        space--;
        for (int j = 0; j <= i; j++) {
            printf("%d ", nCr(i, j));
        }
        printf("\n");
    }
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    PascalTriangle(n);

    return 0;
}