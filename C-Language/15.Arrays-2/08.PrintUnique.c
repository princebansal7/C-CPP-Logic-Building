#include <stdio.h>

void printUnique(int arr[], int size)
{
    int cnt = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j])
                arr[j] = -1;
        }
        if (arr[i] != -1)
            printf("%d ", arr[i]);
    }
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

    printUnique(arr, size);

    printf("\n");
    return 0;
}