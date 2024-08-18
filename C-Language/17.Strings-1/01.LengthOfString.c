#include <stdio.h>

int main()
{
    char str[20];
    printf("Enter String: ");
    scanf("%s", str);

    // int i = 0;
    // for (i = 0; str[i]; i++)
    //     ;
    // printf("length: %d", i);

    //          or

    int cnt = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != '\0')
            cnt++;
    printf("length: %d", cnt);

    printf("\n");
    return 0;
}