#include <stdio.h>

// TSRS

int HCF(int a, int b)
{

    int hcf = 1;
    int min = a < b ? a : b;

    for (int i = min; i >= 1; i--) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
            break;
        }
    }
    return hcf;
}
int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int hcf = HCF(a, b);
    printf("HCF of %d and %d is: %d\n", a, b, hcf);
    return 0;
}