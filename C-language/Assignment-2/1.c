#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int unit_digit = x % 10;

    printf("Unit digit is: %d \n", unit_digit);
    return 0;
}