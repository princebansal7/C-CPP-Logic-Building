#include <stdio.h>

void getSum(int a, int b, int* sum, int* prod)
{
    // Not literally returning multiple values
    // But just manipulating them using pointer outside of their scope (in another function)
    *sum = a + b;
    *prod = a * b;
}

int main()
{
    int a, b, SUM, PROD;
    printf("Enter a and b value: ");
    scanf("%d %d", &a, &b);

    getSum(a, b, &SUM, &PROD);

    printf("Sum of a & b is: %d\n", SUM);
    printf("Product of a & b is: %d\n", PROD);

    return 0;
}