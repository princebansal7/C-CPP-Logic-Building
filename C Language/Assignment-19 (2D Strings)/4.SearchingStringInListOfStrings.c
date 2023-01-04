#include <stdio.h>
#include <string.h>

// My own string comparison function
// returns 0 if str1 == str2
// returns 1 if str1 > str2
// returns -1 if str1 < str2
int strComp(char str1[], char str2[])
{
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    int ok = 0;
    if (size1 < size2)
        return -1;
    else if (size1 > size2)
        return 1;
    else {
        for (int i = 0; i < size1; i++) {
            if (str1[i] - str2[i] > 0)
                return 1;
            else if (str1[i] - str2[i] < 0)
                return -1;
            else {
                ok = 1;
                continue;
            }
        }
        if (ok)
            return 0;
    }
}

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
        if (strComp(str[i], strnew) == 0) {
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