#include <stdio.h>

// str = "My name is Prince"
//    => words = 4
//    => spaces = 3  => total words = spaces +1;
//  or we can directly start count with 1

int countWords(char str[])
{
    int cnt = 1;
    for (int i = 0; str[i]; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ')
            cnt++;
    }
    return cnt;
}

int main()
{
    char str[50];
    printf("Enter String: ");
    fgets(str, 50, stdin);

    int words = countWords(str);

    printf("Total Words: %d", words);
    printf("\n");
    return 0;
}