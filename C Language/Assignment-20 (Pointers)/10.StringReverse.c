#include <stdio.h>

int len(char* ptr)
{
    int length = 0;
    while (*ptr != '\0') {
        ptr++;
        length++;
    }
    return length;
}

void reverse1(char* a, int n)
{
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        char temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void reverse2(char* arr, int size)
{
    int i;
    printf("After reversing:\n");
    for (i = size - 1; i >= 0; i--) {
        printf("%c", *(arr + i));
    }
    printf("\n");
}

// this way we don't have to make seperate fucntion of length
void reverse3(char* str)
{
    int length = 0;
    char* end = str;
    while (*end != '\0') {
        length++;
        end++;
    }
    end--;
    for (int i = 0; i < length; i++) {
        printf("%c", *(end--));
    }
}

int main()
{
    char str[20];
    printf("Enter string:\n");
    scanf("%s", str);
    int n = len(str);

    reverse1(str, n);

    // Will not modify actual string:
    // reverse2(str, n);
    // reverse3(str);

    printf("After reversing:\n");
    printf("%s", str);

    printf("\n");

    return 0;
}