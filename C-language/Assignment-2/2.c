#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    int new_num = x / 10;

    printf("Number without Unit digit is: %d \n", new_num);
    return 0;
}