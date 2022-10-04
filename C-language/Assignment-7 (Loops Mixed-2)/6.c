#include <stdio.h>

// all prime numbers under 100
int main()
{
    printf("All prime numbers between 1 to 100 are:\n");
    for (int i = 1; i <= 100; i++) {
        int flag = 1;
        if (i == 1)
            flag = 0;
        else {
            for (int j = 2; j < i; j++) {
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