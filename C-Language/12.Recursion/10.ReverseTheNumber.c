#include <stdio.h>

// Printing Number in reverse

void reverseNumber(int n)
{
    if (n == 0) {
        return;
    }
    printf("%d", n % 10);
    reverseNumber(n / 10);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    reverseNumber(n);
    printf("\n");
    return 0;
}