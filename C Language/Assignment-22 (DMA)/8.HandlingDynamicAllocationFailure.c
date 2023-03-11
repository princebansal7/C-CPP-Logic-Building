#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of data values (n): ");
    scanf("%d", &n);

    // if user enter large size, and malloc, calloc & realloc falis to allocate such size,
    // then they return NULL
    int* ptr = (int*)malloc(n * sizeof(int));

    // Handling allocation failure
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 0;
    }

    printf("Enter data values:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &ptr[i]);

    printf("Data values are:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", ptr[i]);

    free(ptr);

    printf("\n");
    return 0;
}