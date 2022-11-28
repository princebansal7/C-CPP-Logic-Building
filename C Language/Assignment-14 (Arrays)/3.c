#include <stdio.h>

int main()
{
    int arr[10], evenSum = 0, oddSum = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter array Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);

        if (arr[i] & 1)
            oddSum += arr[i];
        else
            evenSum += arr[i];
    }
    printf("Even Sum is: %d\n", evenSum);
    printf("Odd Sum is: %d\n", oddSum);

    return 0;
}