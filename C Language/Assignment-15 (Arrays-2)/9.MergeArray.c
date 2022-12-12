#include <stdio.h>

/*
Example:

1.
    Enter size: 5
    Enter array1 Elememts in Decending order:
    50 40 30 20 10
    Enter array2 Elememts in Decending order:
    100 90 80 70 60

    Merged array is:
    100 90 80 70 60 50 40 30 20 10

2.
    Enter size: 5
    Enter array1 Elememts in Decending order:
    50 40 30 30 20
    Enter array2 Elememts in Decending order:
    59 50 40 40 10

    Merged array is:
    59 50 50 40 40 40 30 30 20 10

*/

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void mergeArrays(int arr[], int brr[], int size)
{
    int nSize = 2 * size;
    int newArr[nSize];

    int i = 0, j = 0, idx = 0;
    while (i < size && j < size) {
        if (arr[i] >= brr[j]) {
            newArr[idx++] = arr[i];
            i++;
        } else if (arr[i] < brr[j]) {
            newArr[idx++] = brr[j];
            j++;
        }
    }
    while (i < size) {
        newArr[idx++] = arr[i];
        i++;
    }
    while (j < size) {
        newArr[idx++] = brr[j];
        j++;
    }

    printArray(newArr, nSize);
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size], brr[size];

    printf("Enter array1 Elememts in Decending order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter array2 Elememts in Decending order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &brr[i]);
    }

    printf("\nMerged array is:\n");
    mergeArrays(arr, brr, size);

    printf("\n");
    return 0;
}