#include <stdio.h>

int arr[100];

// way-1

// int freq[100];
// void frequency(int arr[], int size)
// {
//     for (int i = 0; i < size; i++) {
//         freq[arr[i]]++;
//     }
//     // need to print the element correctly
//     for (int i = 0; i < 100; i++) {
//         if (freq[arr[i]] != 0) {
//             printf("%d --> %d\n", arr[i], freq[arr[i]]);
//         }
//     }
// }

// way-2

void frequency(int arr[], int size)
{
    int visited[100] = { 0 };
    for (int i = 0; i < size; i++) {
        if (visited[i] == 1)
            continue;
        int cnt = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cnt++;
                visited[j] = 1;
            }
        }
        printf("%d --> %d\n", arr[i], cnt);
    }
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    printf("Enter Elememts:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    frequency(arr, size);

    printf("\n");
    return 0;
}