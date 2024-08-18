#include <stdio.h>

int main()
{
    int n, cnt = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    // check prime or not
    if (n <= 1)
        printf("Not Prime\n");
    else {
        int flag = 0;
        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
            printf("Not a Prime number\n");
        else
            printf("Prime number\n");
    }
    return 0;
}