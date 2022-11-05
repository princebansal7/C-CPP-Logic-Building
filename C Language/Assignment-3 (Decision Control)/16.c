#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z')
        printf("Lowercase letter\n");
    else if (ch >= 'A' && ch <= 'Z')
        printf("Uppercase letter\n");
    else if (ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '&' || ch == '*')
        printf("Special character\n");
    else
        printf("Invalid character\n");
    return 0;
}