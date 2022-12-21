#include <stdio.h>

int freq[256];
int main()
{
    // char str[50] = "aabcccdde";

    char str[50];
    printf("Enter String: ");
    fgets(str, 20, stdin);

    for (int i = 0; str[i]; i++)
        freq[str[i]]++;

    printf("frequency of characters:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] != 0)
            printf("%c --> %d\n", i, freq[i]);
    }

    printf("\n");
    return 0;
}