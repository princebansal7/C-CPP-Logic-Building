#include <stdio.h>

int mystrlen(char str[])
{
    int cnt = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != '\0') {
            printf("%c -> %d\n", str[i], str[i]); // to check till what fgets() take as input
            cnt++;
        }

    return cnt;
}

int main()
{
    char str[20];
    printf("Enter String: ");
    scanf("%s", str);
    // fgets(str, 20, stdin);

    int len = mystrlen(str);

    printf("length: %d", len);

    printf("\n");
    return 0;
}