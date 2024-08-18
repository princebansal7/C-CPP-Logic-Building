
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // reversing Logic

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }

    printf("Reversed array:\n");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}