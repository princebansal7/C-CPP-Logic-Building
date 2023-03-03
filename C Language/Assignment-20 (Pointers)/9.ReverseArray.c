#include <stdio.h>

// way-1
void reverse1(int* a, int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

// way-2
void reverse2(int* arr, int size)
{
    int i;
    for (i = size - 1; i >= 0; i--) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main()
{
    int arr[20], n;
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter array values:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    reverse1(arr, n);
    // reverse2(arr, n);

    printf("After reversing:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
    return 0;
}