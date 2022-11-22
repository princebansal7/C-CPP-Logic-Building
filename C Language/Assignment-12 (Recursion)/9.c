#include <stdio.h>

// n=12 => in octal: (14)8

// (n/8) % 8
//  12   % 8 = 4
//  1    % 8 = 1

// Now, print in reverse

void decimalToOctal(int n)
{
    if (n == 0) {
        return;
    }
    decimalToOctal(n / 8);
    printf("%d", n % 8);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    decimalToOctal(n);
    printf("\n");
    return 0;
}