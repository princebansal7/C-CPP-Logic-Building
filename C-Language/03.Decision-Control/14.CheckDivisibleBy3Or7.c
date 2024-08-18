#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 3 == 0 || x % 7 == 0)
        printf("Yes, Divisible by 3 or 7\n");
    else
        printf("Not divisible by either 3 or 7\n");

    return 0;
}