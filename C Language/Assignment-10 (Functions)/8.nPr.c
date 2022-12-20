

#include <stdio.h>

// TSRS

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * i;
    return ans;
}

// Arrangements
float nPr(int n, int r)
{
    //  nPr = n! / (n – r)!

    return fact(n) / fact(n - r);
}

int main()
{
    int n, r;
    printf("Enter a n & r: ");
    scanf("%d%d", &n, &r);

    printf("nPr is: %.2f\n", nPr(n, r));

    return 0;
}