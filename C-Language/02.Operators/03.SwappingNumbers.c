#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Numbers before swapping is:\nx = %d y = %d\n", x, y);
    int temp = x;
    x = y;
    y = temp;
    printf("Numbers after swapping is:\nx = %d y = %d\n", x, y);
    return 0;
}