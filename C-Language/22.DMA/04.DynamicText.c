#include <stdio.h>
#include <stdlib.h>

int main()
{
    char* text = NULL; // Initialize text pointer to NULL
    printf("Enter some text: ");
    text = (char*)malloc(sizeof(char) * 50); // Allocates 50 bytes
    fgets(text, 50, stdin);
    printf("You entered: %s", text);

    free(text);

    return 0;
}
