#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &x, &y);

    if (x > y)
        printf("%d is Greater \n", x);
    else if (x == y)
        printf("Both are euqal \n");
    else
        printf("%d is Greater \n", y);
    return 0;
}