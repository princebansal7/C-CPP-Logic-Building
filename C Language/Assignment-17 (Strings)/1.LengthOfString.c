#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter String: ");
    fgets(str, 20, stdin);

    int i = 0;
    for (i = 0; str[i]; i++)
        ;

    printf("length: %d", i);

    printf("\n");
    return 0;
}