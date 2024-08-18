#include <stdio.h>

void reverse(int arr[], int size)
{
    for (int i = 0, j = size - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Elememts:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    reverse(arr, size);

    printf("\n");
    return 0;
}