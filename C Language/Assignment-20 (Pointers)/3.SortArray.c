#include <stdio.h>

int arr[100];

void sort(int* ptr, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (ptr[j] > ptr[j + 1]) {
                int temp = ptr[j];
                ptr[j] = ptr[j + 1];
                ptr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    for (int i = 0; i < size; i++)
        scanf("%d", &arr[i]);

    sort(arr, size);

    printf("After sorting:\n");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}