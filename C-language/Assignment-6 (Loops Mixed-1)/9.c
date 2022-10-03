#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int max = a > b ? a : b;

    for (int i = max; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            printf("LCM of %d and %d is: %d\n", a, b, i);
            break;
        }
    }
    return 0;
}