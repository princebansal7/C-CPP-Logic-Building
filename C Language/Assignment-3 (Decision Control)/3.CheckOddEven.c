#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0)
        printf("Even Number\n");
    else
        printf("Odd Number\n");
    return 0;
}