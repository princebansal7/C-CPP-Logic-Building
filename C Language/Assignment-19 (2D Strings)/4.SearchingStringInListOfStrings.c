#include <stdio.h>
#include <string.h>

int main()
{
    int n, pos = 0;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char str[n][20], strnew[20];
    int flag = 0;

    printf("Enter strings: \n");
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    printf("Enter string you want to search:\n");
    scanf("%s", strnew);

    // searching logic

    for (int i = 0; i < n; i++) {
        if (strcmp(str[i], strnew) == 0) {
            pos = i + 1;
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("String found at position %d.", pos);
    else
        printf("String not found");

    printf("\n");
    return 0;
}