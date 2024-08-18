#include <stdio.h>

// Printing prime numbers between a & b (=> in Range 1 to N)
// TSRN

void NPrime(int a, int b)
{
    for (int i = a; i <= b; i++) {
        int flag = 1;
        if (i <= 1)
            flag = 0;
        else {
            for (int j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
            printf("%d ", i);
    }
    printf("\n");
}

int main()
{

    int a, b;
    printf("Enter 2 number: ");
    scanf("%d%d", &a, &b);

    printf("Prime numbers between %d and %d are:\n", a, b);
    NPrime(a, b);
    return 0;
}