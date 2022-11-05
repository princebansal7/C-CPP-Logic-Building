#include <stdio.h>

int main()
{
    int x;
    printf("Enter Amount(INR): ");
    scanf("%d", &x);

    double USD_amount = x / 76.23;
    printf("Amount in USD is: %.3f\n", USD_amount);
    return 0;
}