#include <stdio.h>
#include <string.h>

// My initial logic
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
    char str1[20], str2[20];
    printf("Enter String-1: ");
    scanf("%s", str1);

    printf("Enter String-2: ");
    scanf("%s", str2);

    int ans = strComp(str1, str2);
    printf("Value: %d", ans);

    printf("\n");
    return 0;
}