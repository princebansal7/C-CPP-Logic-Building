#include <stdio.h>

int main()
{
    int x;
    printf("Enter number: ");
    scanf("%d", &x);
    for (int i = 1; i <= 10; i++) {
        printf(" %d X %d = %d\n", x, i, x * i);
    }
    printf("\n");
    return 0;
}