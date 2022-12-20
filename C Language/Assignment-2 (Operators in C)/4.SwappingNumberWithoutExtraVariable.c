#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Numbers before swapping is:\nx = %d y = %d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("Numbers after swapping is:\nx = %d y = %d\n", x, y);
    return 0;
}