#include <stdio.h>

int main()
{
    int arr[10], sum = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter array Elememt %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    int size = sizeof(arr) / sizeof(arr[0]);
    float average = (float)sum / size;

    // printf("size: %ld\n", sizeof(arr)); // 40
    // printf("size: %ld\n", sizeof(arr[0])); // 4

    printf("Average is: %.2f\n", average);

    return 0;
}