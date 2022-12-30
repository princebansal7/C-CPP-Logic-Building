#include <stdio.h>

void toLower(char str[])
{
    for (int i = 0; str[i]; i++)
        if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
}

int main()
{
    // char str[50] = "aabcccdde";

    char str[50];
    printf("Enter String: ");
    scanf("%s", str);

    toLower(str);

    printf("Converted string is: %s\n", str);
    printf("\n");
    return 0;
}