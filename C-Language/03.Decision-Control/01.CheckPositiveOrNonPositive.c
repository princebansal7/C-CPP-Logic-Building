#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0)
        printf("%d is Positive\n", x);
    else
        printf("%d is Non Positive\n", x);
    return 0;
}