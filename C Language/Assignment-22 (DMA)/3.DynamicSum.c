#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    printf("Enter number of data values (n): ");
    scanf("%d", &n);

    int* ptr = (int*)malloc(n * sizeof(int));

    printf("Enter data values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    printf("Sum is: %d", sum);

    free(ptr);

    printf("\n");
    return 0;
}