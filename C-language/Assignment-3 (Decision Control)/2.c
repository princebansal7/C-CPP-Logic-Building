#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 5 == 0)
        printf("yes, divisible by 5\n");
    else
        printf("Not divisible by 5\n");
    return 0;
}