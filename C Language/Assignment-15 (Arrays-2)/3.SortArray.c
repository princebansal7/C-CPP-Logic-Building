#include <stdio.h>

// Modified bubble sort
void sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        int isSwapped = 0;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                isSwapped = 1;
            }
        }
        if (isSwapped == 0)
            break;
    }
}

int main()
{
    int n;
    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    sort(arr, n);

    printf("After Sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}