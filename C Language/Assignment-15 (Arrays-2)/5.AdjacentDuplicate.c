#include <stdio.h>

int adjacentDuplicate(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] == arr[i + 1])
            return arr[i];
    }
    return -1;
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

    int ans = adjacentDuplicate(arr, size);

    if (ans != -1)
        printf("Adjacent duplicate element is: %d ", ans);
    else
        printf("No Adjacent duplicate present");

    printf("\n");
    return 0;
}