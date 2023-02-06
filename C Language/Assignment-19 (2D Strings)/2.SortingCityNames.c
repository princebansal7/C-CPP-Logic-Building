#include <stdio.h>
#include <string.h>

// My Own String copy function
// (will copy str2 in str1)
void strCpy(char str1[], char str2[])
{
    int i;
    for (i = 0; str2[i]; i++) {
        str1[i] = str2[i];
    }
    str1[i] = '\0'; // so that we can know where string ends
}

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
            }
        }
        if (ok)
            return 0;
    }
}

int main()
{
    int n;
    printf("Enter number of Cities: ");
    scanf("%d", &n);

    char str[n][20], tempStr[20];

    printf("Enter City Names: \n");

    for (int i = 0; i < n; i++)
        scanf("%s", str[i]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (strComp(str[i], str[j]) > 0) {
                strCpy(tempStr, str[i]);
                strCpy(str[i], str[j]);
                strcpy(str[j], tempStr);
            }
        }
    }

    printf("After sorting:\n");
    for (int i = 0; i < n; i++)
        printf("%s ", str[i]);

    printf("\n");
    return 0;
}