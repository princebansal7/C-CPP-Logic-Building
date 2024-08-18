#include <stdio.h>

int minimum(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++) {
        if (min > arr[i])
            min = arr[i];
    }
    return min;
}

int main()
{
    int n;
    printf("Enter sizew: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int ans = minimum(arr, n);

    printf("Minimum number is: %d", ans);
    printf("\n");
    return 0;
}