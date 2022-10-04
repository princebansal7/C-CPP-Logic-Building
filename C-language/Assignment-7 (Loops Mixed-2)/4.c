#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int min = a < b ? a : b;

    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            printf("HCF of %d and %d is: %d\n", a, b, i);
            break;
        }
    }
    return 0;
}