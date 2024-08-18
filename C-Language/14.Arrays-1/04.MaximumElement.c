#include <stdio.h>

int main()
{
    int arr[10], max = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < 10; i++)
        if (max < arr[i])
            max = arr[i];

    printf("Maximum element is: %d\n", max);

    return 0;
}