#include <stdio.h>

// NOTE: for simplicity input string must e lowercase and have only alphabets

void countVowelsCons(char* ptr)
{
    int vCnt = 0, cCnt = 0;
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            vCnt++;
        else
            cCnt++;
        ptr++;
    }
    printf("Vowels: %d\nConsonants: %d\n", vCnt, cCnt);
}

int main()
{
    char str[20];
    printf("Enter string:\n");
    scanf("%s", str);

    countVowelsCons(str);

    printf("\n");
    return 0;
}