#include <stdio.h>

int main()
{
    int x;
    printf("Enter a 3 digit number: ");
    scanf("%d", &x);

    int first_digit = x % 10;
    x /= 10;
    int second_digit = x % 10;
    x /= 10;
    int third_digit = x; // or third_digit = x%10;

    int sum = first_digit + second_digit + third_digit;
    printf("Sum of digits of number is: %d \n", sum);
    return 0;
}