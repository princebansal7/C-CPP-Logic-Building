#include <stdio.h>

int main()
{
    int n;
    printf("How many strings you want to enter: ");
    scanf("%d", &n);

    char str[n][20];

    printf("Enter strings: \n");

    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    printf("Entered strings are:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", str[i]);

    printf("\n");
    return 0;
}