#include <stdio.h>

int fibonacci(int n) // to get Nth fibonacci number
{
    if (n == 0 || n == 1)
        return n;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibSeries(int n)
{
    static int a = 0, b = 1, c; // static so that they stay in memory with vlaues
    if (n > 0) {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
        printFibSeries(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%dth Fibonaaci number is: %d\n\n", n, fibonacci(n));

    printf("Fibonacci series is: \n");
    printf("0 1 ");
    printFibSeries(n - 2); // n-2 beacuse 2 numbers already printed

    printf("\n");
    return 0;
}