#include <stdio.h>

int main()
{
    int n;
    printf("Enter a Even number: ");
    scanf("%d", &n);

    switch (n % 2 == 0) {
    case 1:
        n = n + 1;
        printf("Upper nearest odd number is: %d\n", n);
        break;
    case 0:
        printf("Already odd: %d\n", n);
        break;
    }
    return 0;
}