#include <stdio.h>

int main()
{
    char str[50];
    printf("Enter String: ");
    fgets(str, 50, stdin);
    char ch;
    printf("Enter an Character: ");
    scanf("%c", &ch);
    int cnt = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ch)
            cnt++;
    }

    printf("%c Occures %d times!", ch, cnt);

    printf("\n");
    return 0;
}