#include <stdio.h>

int main()
{
    char str[20], newString[20];

    printf("Enter String:\n");
    fgets(str, 20, stdin);

    for (int i = 0; str[i]; i++)
        newString[i] = str[i];

    printf("New String is:\n");
    printf("%s", newString);

    printf("\n");
    return 0;
}