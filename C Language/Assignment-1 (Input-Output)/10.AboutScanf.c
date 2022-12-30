#include <stdio.h>

int main()
{
    int d, m, y;
    printf("Enter Date in DD/MM/YYYY format: ");
    scanf("%d/%d/%d", &d, &m, &y);
    printf("Day-%d, Month-%d, Year-%d \n", d, m, y);

    return 0;
}