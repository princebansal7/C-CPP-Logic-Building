#include <stdio.h>

// n=12

// (n/2) % 2 => in binary: (1100)2

//  12   % 2 = 0
//  6    % 2 = 0
//  3    % 2 = 1
//  1    % 2 = 1
// Now,  print in reverse

void decimalToBinary(int n)
{
    if (n == 0) {
        return;
    }
    decimalToBinary(n / 2);
    printf("%d", n % 2);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    decimalToBinary(n);
    printf("\n");
    return 0;
}