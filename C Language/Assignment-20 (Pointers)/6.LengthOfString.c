#include <stdio.h>

// way-1
int len1(char* ptr)
{
    int length = 0;
    while (ptr[length] != '\0') {
        length++;
    }
    return length;
}

// way-2
int len2(char* ptr)
{
    int length = 0;
    while (*ptr != '\0') {
        ptr++;
        length++;
    }
    return length;
}

int main()
{
    char str[20];
    printf("Enter string:\n");
    scanf("%s", str);

    // printf("Length is: %d", len1(str));
    printf("Length is: %d", len2(str));

    printf("\n");
    return 0;
}