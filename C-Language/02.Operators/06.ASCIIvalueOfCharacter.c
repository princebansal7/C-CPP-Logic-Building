#include <stdio.h>

int main()
{
    char x;
    printf("Enter a Character: ");
    scanf("%c", &x);

    int ASCII = x;

    printf("ASCII of %c is: %d \n", x, ASCII);
    return 0;
}