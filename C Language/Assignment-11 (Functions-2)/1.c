#include <stdio.h>

// TSRS

int LCM(int a, int b)
{

    int lcm = 1;
    int max = a > b ? a : b;

    for (int i = max; i <= a * b; i++) {
        if (i % a == 0 && i % b == 0) {
            lcm = i;
            break;
        }
    }
    return lcm;
}
int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    int lcm = LCM(a, b);
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return 0;
}