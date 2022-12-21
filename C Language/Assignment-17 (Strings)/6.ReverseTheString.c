#include <stdio.h>

int main()
{
    // char str[50] = "aabcccdde";

    char str[50];
    printf("Enter String:\n");
    fgets(str, 50, stdin);

    // getting length

    int size = 0;
    for (int i = 0; str[i]; i++)
        if (str[i] != '\0')
            size++;

    // reversing logic

    for (int i = 0, j = size - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }

    printf("After Reversing:\n%s", str);
    printf("\n");
    return 0;
}