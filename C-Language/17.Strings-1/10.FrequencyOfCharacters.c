#include <stdio.h>

int main()
{

    int freq[256] = { 0 };
    char str[50];
    printf("Enter String: ");
    scanf("%s", str);

    for (int i = 0; str[i]; i++)
        freq[str[i]]++;

    printf("frequency of characters:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0)
            printf("%c --> %d\n", i, freq[i]);
    }

    return 0;
}