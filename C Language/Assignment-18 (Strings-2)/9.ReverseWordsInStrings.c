#include <stdio.h>
#include <string.h>

// I/P" "My name is Prince Bansal"
// O/P: "Bansal Prince is name My"

void reverse(char str[], int start, int end)
{

    for (int i = start, j = end; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

void reverseWords(char str[])
{
    for (int i = 0; str[i]; i++) {
        int end = i;
        while (str[end] != ' ') {
            if (str[end] == '\0')
                break;
            end++;
        }
        reverse(str, i, end - 1);
        i = end;
    }
    reverse(str, 0, strlen(str) - 1);
}

int main()
{
    // char str[] = "My name is Prince Bansal";

    char str[50];
    printf("Enter String: ");
    fgets(str, 50, stdin);

    reverseWords(str);

    printf("After reversing words new string is:\n");
    printf("%s", str);
    printf("\n");
    return 0;
}