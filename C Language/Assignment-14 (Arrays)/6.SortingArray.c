#include <stdio.h>

int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++) {
        printf("Enter Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Naive logic: O(N^2)

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("After Sorting:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}