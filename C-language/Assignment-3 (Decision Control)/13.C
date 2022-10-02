#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x % 2 == 0 && x % 3 == 0)
        printf("Yes, Divisible by 2 and 3\n");
    else
        printf("Not divisible by 2 and 3\n");

    return 0;
}