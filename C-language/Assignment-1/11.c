#include <stdio.h>

int main()
{
    int h, m;
    printf("Enter time in HH:MM format: ");
    scanf("%d:%d", &h, &m);
    printf("%d hour and %d Minute\n", h, m);

    return 0;
}