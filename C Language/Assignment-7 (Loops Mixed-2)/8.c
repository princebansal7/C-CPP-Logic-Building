#include <stdio.h>

//  next prime number from the given number

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Next prime number from %d is: ", a);
    for (int i = a + 1; i <= a + 100; i++) { // just for safety going till a higher range
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
        if (flag == 1) {
            printf("%d ", i);
            break;
        }
    }
    printf("\n");
    return 0;
}