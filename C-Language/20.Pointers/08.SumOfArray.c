#include <stdio.h>

int getSum(int* a, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += *a;
        a++;
    }
    return sum;
}

int main()
{
    int arr[20], n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array values:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Sum is: %d", getSum(arr, n));

    printf("\n");
    return 0;
}