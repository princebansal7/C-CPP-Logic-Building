#include <stdio.h>

int main()
{
    int n, sum = 0;
    do {
        printf("Enter number: ");
        scanf("%d", &n);
        if (n == 0)
            break;
        sum += n;
    } while (n != 0);

    printf("Sum of all entries is: %d\n", sum);
    return 0;
}