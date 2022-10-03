#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", 2 * i + 1);
    }
    printf("\n");
    return 0;
}