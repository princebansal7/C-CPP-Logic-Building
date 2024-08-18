#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of data values (n): ");
    scanf("%d", &n);

    int* ptr = (int*)malloc(n * sizeof(int));

    printf("Enter data values:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    int max = ptr[0], min = ptr[0];

    for (int i = 1; i < n; i++)
        if (max < ptr[i])
            max = ptr[i];
        else if (min > ptr[i])
            min = ptr[i];

    printf("Maximum element is: %d\nMinimum element is: %d\n", max, min);
    free(ptr);

    printf("\n");
    return 0;
}