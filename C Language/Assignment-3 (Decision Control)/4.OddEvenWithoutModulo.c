#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x & 1)
        printf("Odd Number\n");
    else
        printf("Even Number\n");
    return 0;
}