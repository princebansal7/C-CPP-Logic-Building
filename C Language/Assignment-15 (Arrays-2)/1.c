#include <stdio.h>

int greatest(int* arr, int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (max < arr[i])
            max = arr[i];
    }
    return max;
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int ans = greatest(arr, n);

    printf("Greatest number is: %d", ans);
    printf("\n");
    return 0;
}