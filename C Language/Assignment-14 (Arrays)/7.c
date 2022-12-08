#include <limits.h>
#include <stdio.h>

int main()
{
    int max = INT_MIN, secondMax = INT_MIN;

    int arr[10] = { 25, 45, 65, 23, -5, 69, -69, -1, 15, 3 }; // for testing

    // for (int i = 0; i < 10; i++) {
    //     printf("Enter Elememt %d: ", i + 1);
    //     scanf("%d", &arr[i]);
    // }

    // Two Traversal logic

    // for (int i = 0; i < 10; i++) {
    //     if (max < arr[i]) {
    //         max = arr[i];
    //     }
    // }
    // for (int i = 0; i < 10; i++) {
    //     if (secondMax < arr[i] && arr[i] != max) {
    //         secondMax = arr[i];
    //     }
    // }

    // One Traversal logic

    for (int i = 0; i < 10; i++) {
        if (max < arr[i]) {
            secondMax = max;
            max = arr[i];
        } else if (secondMax < arr[i] && arr[i] != max)
            secondMax = arr[i];
    }

    printf("Maximum element is: %d\n", max);
    printf("Second maximum element is: %d\n", secondMax);

    return 0;
}