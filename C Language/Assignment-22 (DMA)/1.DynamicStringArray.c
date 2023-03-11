#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* str = NULL; // assigned with NULL, so that str won't be Wild pointer
    char character;
    int i = 0;
    printf("Enter string of any length: ");
    str = (char*)malloc(sizeof(char));
    int numberOfChar = 1; // allocated 1 byte of character => as we have to put '\0' at last place

    while (character != '\n') {
        character = getc(stdin); // taking one character input until user press ENTER
        numberOfChar++;
        str = realloc(str, numberOfChar * sizeof(char)); // re allocating memory according to number of characters entered
        str[i] = character;
        i++;
    }
    str[i] = '\0'; // as i indicates last index
    printf("Entered string is:\n%s", str);
    free(str);

    printf("\n");
    return 0;
}