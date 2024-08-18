#include <stdio.h>
#include <string.h>

int mystrlen(char str[])
{
    int cnt = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != '\0')
            cnt++;

    return cnt;
}

void reverse(char str[])
{
    int size = mystrlen(str);
    // int size = strlen(str);

    printf("Size: %d\n", size);

    for (int i = 0, j = size - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char str[50];
    printf("Enter String:\n");
    fgets(str, 50, stdin);

    reverse(str);
    printf("After Reversing: %s", str);
    printf("\n");
    return 0;
}