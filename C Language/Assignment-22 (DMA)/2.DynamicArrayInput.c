#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum = 0;
    float avg;
    printf("Enter number of data values (n): ");
    scanf("%d", &n);

    int* ptr = (int*)calloc(n, sizeof(int));

    printf("Enter data values:\n");

    // NOTE:
    // ptr[i]  ==  *(ptr+i)
    // &ptr[i] ==   (ptr+i)

    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
        sum += ptr[i];
    }

    avg = sum / (float)n;
    printf("Average is: %.2f", avg);

    free(ptr);

    printf("\n");
    return 0;
}