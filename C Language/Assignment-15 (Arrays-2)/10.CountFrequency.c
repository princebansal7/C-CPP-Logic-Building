#include <stdio.h>

int freq[100], arr[100];

void frequency(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    // need to print the element correctly
    for (int i = 0; i < 100; i++) {
        if (freq[i] > 0) {
            printf("%d --> %d\n", freq[arr[i]], freq[i]);
        }
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter Elememts:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    frequency(arr, size);

    printf("\n");
    return 0;
}