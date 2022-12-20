#include <stdio.h>

// TSRS

int checkPrime(int a)
{
    if (a <= 1)
        return 0;
    for (int i = 2; i * i <= a; i++)
        if (a % i == 0)
            return 0;
    return 1;
}
int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    if (checkPrime(a))
        printf("Prime Number\n");
    else
        printf("Not Prime\n");
    return 0;
}