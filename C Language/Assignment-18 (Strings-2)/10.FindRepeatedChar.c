#include <stdio.h>

// Using frequency logic:

void findRepeated(char str[])
{
    int freq[256] = { 0 };
    for (int i = 0; str[i]; i++) {
        freq[str[i]]++;
    }

    printf("Repeated characters are:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 1) {
            printf("%c -> %d\n", i, freq[i]);
        }
    }
}

/*

char findRepeated(char str[])
{
    char ch = '#';
    for (int i = 0; str[i]; i++) {
        int ok = 0;
        for (int j = i + 1; str[j]; j++) {
            if (str[i] == str[j]) {
                ch = str[i];
                ok = 1;
                break;
            }
            if (ok)
                break;
        }
    }
    return ch;
}

*/

int main()
{
    char str[50];
    printf("Enter String: ");
    scanf("%s", str);

    findRepeated(str);

    /*
        char repeatedChar = findRepeated(str);

        if (repeatedChar != '#')
            printf("Repeated character is: %c", repeatedChar);
        else
            printf("There is no repeated character");
    */

    printf("\n");
    return 0;
}