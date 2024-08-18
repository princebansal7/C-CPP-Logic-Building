#include <stdio.h>

int main()
{
    int arr[10], min = 99999999;

    for (int i = 0; i < 10; i++) {
        printf("Enter Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
        if (min > arr[i])
            min = arr[i];

    printf("Minimum element is: %d\n", min);

    return 0;
}