#include <stdio.h>

// HCF as well as checking Co-Prime

int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int min = a < b ? a : b;
    int hcf;
    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }
    if (hcf == 1)
        printf("%d and %d are Co-Prime\n", a, b);
    else
        printf("%d and %d are not Co-Prime\n", a, b);
    return 0;
}