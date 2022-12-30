#include <stdio.h>

int checkAlphanumeric(char str[])
{
    int flag1 = 0, flag2 = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] >= '0' && str[i] <= '9') {
            flag1 = 1;
            break;
        }
    for (int i = 0; str[i]; i++)
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            flag2 = 1;
            break;
        }

    if (flag1 == 1 && flag2 == 1)
        return 1;
    return 0;
}

int main()
{
    // char str[50] = "aabBS34dde";

    char str[50];
    printf("Enter String: ");
    scanf("%s", str);

    if (checkAlphanumeric(str))
        printf("Alphanumeric string!!");
    else
        printf("Not Alphanumeric String");

    printf("\n");
    return 0;
}