#include <stdio.h>

int countDuplicate(int arr[], int size)
{
    int cnt = 0;
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] == arr[j])
                cnt++;

    return cnt;
}

int main()
{
    int size;
    printf("Enter size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Elememts:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int ans = countDuplicate(arr, size);

    printf("Duplicate Elements are: %d", ans);

    printf("\n");
    return 0;
}