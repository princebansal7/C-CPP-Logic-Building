#include <limits.h>
#include <stdio.h>

int main()
{
    int Min = INT_MAX, secondMin = INT_MAX;

    int arr[10] = { 25, 45, 65, 23, 5, 69, -569, 1, 15, 3 }; // for testing

    // for (int i = 0; i < 10; i++) {
    //     printf("Enter Elememt %d: ", i + 1);
    //     scanf("%d", &arr[i]);
    // }

    // Two Traversal logic

    // for (int i = 0; i < 10; i++) {
    //     if (Min < arr[i]) {
    //         Min = arr[i];
    //     }
    // }
    // for (int i = 0; i < 10; i++) {
    //     if (secondMin < arr[i] && arr[i] != Min) {
    //         secondMin = arr[i];
    //     }
    // }

    // One Traversal logic

    for (int i = 0; i < 10; i++) {
        if (Min > arr[i]) {
            secondMin = Min;
            Min = arr[i];
        } else if (secondMin > arr[i] && arr[i] != Min)
            secondMin = arr[i];
    }

    printf("Minimum element is: %d\n", Min);
    printf("Second Minimum element is: %d\n", secondMin);

    return 0;
}