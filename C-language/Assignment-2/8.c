#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x & 1)
        printf("%d is Odd Number\n", x);
    else
        printf("%d is Even number\n", x);
    return 0;
}