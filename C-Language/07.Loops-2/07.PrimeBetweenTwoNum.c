#include <stdio.h>

// all prime numbers between a and b
int main()
{
    int a, b;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &a, &b);

    printf("All prime numbers between %d and %d are:\n", a, b);
    for (int i = a; i <= b; i++) {
        int flag = 1;
        if (i == 1)
            flag = 0;
        else {
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}