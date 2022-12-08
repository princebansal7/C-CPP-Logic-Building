#include <limits.h>
#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    int arr[n], brr[n];

        for (int i = 0; i < n; i++) {
        printf("Enter Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
        brr[i] = arr[i];

    for (int i = 0; i < n; i++) {
        printf("%d ", brr[i]);
    }
    printf("\n");
    return 0;
}