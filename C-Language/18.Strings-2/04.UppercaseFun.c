#include <stdio.h>

void toUpper(char str[])
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
}

int main()
{
    // char str[50] = "aabcccdde";

    char str[50];
    printf("Enter String: ");
    scanf("%s", str);

    toUpper(str);

    printf("Converted string is: %s\n", str);
    printf("\n");
    return 0;
}