#include <stdio.h>

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

void leftRotateByOne(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 1; i < size; i++) {
        arr[i - 1] = arr[i];
    }
    arr[size - 1] = temp;
}

void rightRotateByOne(int arr[], int size)
{
    int temp = arr[size - 1];
    for (int i = size - 1; i >= 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = temp;
}

void rightRotate(int arr[], int size, int n)
{
    for (int i = 1; i <= n; i++)
        rightRotateByOne(arr, size);
}

void leftRotate(int arr[], int size, int n)
{
    for (int i = 1; i <= n; i++)
        leftRotateByOne(arr, size);
}
int main()
{
    int n, size;
    char d;
    printf("Enter direction (L/R), n & size: ");
    scanf("%c%d%d", &d, &n, &size);

    int arr[size];

    printf("Enter Elememts:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (d == 'L') {
        leftRotate(arr, size, n);
        printf("After left Rotation:\n");
        printArray(arr, size);
    } else {
        rightRotate(arr, size, n);
        printf("After right Rotation:\n");
        printArray(arr, size);
    }

    printf("\n");
    return 0;
}