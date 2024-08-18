#include <stdio.h>
#include <string.h>

int checkPalindrome(char str[])
{
    for (int i = 0, j = strlen(str) - 1; i < j; i++, j--) {
        if (str[i] != str[j])
            return 0;
    }
    return 1;
}

int main()
{
    int n;
    printf("Enter number of Strings: ");
    scanf("%d", &n);

    char str[n][20];
    int flag = 0;

    printf("Enter Strings: \n");
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    printf("\nPlaindrome Strings are:\n");
    for (int i = 0; i < n; i++)
        if (checkPalindrome(str[i]))
            printf("%s\n", str[i]);

    printf("\n");
    return 0;
}