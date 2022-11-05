
#include <stdio.h>

// TSRS

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans = ans * i;
    return ans;
}

// combinations
float nCr(int n, int r)
{
    //  nCr = n! / r! * (n – r)!

    return fact(n) / (fact(r) * fact(n - r));
}

int main()
{
    int n, r;
    printf("Enter a n & r: ");
    scanf("%d%d", &n, &r);

    printf("nCr is: %.2f\n", nCr(n, r));

    return 0;
}