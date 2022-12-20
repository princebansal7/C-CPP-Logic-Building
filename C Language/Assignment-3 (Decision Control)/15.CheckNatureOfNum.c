#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0)
        printf("Positive\n");
    else if (x < 0)
        printf("Negative\n");
    else
        printf("Number is Shunya\n");

    return 0;
}