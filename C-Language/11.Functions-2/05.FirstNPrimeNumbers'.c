#include <stdio.h>

// Printing 1st N prime numbers (=> in Range 1 to N)
// TSRN

void NPrime(int a)
{
    for (int i = 1; i <= a; i++) {
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
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("First %d Prime numbers are:\n", a);
    NPrime(a);
    return 0;
}