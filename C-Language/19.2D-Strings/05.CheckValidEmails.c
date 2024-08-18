#include <stdio.h>

// My own strchr() function: as strchr() not available in GCC
// returns 1 if character found in a string
// returns 0 if character not found in the string
int strChr(char str[], char ch)
{
    for (int i = 0; str[i]; i++) {
        if (str[i] == ch)
            return 1;
    }
    return 0;
}

int main()
{
    int n;
    printf("Enter number of Emails: ");
    scanf("%d", &n);

    char str[n][20];
    int flag = 0;

    printf("Enter Emails: \n");
    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    printf("\nOdd emails which doesn't have @ :\n");
    for (int i = 0; i < n; i++)
        if (strChr(str[i], '@') == 0)
            printf("%s\n", str[i]);

    printf("\n");
    return 0;
}