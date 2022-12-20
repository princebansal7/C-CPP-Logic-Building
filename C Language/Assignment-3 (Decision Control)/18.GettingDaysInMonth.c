#include <stdio.h>

int main()
{
    int month;
    printf("Enter month: ");
    scanf("%d", &month);

    if (month == 1)
        printf("Days: 31\n");
    else if (month == 2)
        printf("Days:28\n");
    else if (month == 3)
        printf("Days:31\n");
    else if (month == 4)
        printf("Days:30\n");
    else if (month == 5)
        printf("Days:31\n");
    else if (month == 6)
        printf("Days:30\n");
    else if (month == 7)
        printf("Days:31\n");
    else if (month == 8)
        printf("Days:31\n");
    else if (month == 9)
        printf("Days:30\n");
    else if (month == 10)
        printf("Days:31\n");
    else if (month == 11)
        printf("Days:30\n");
    else if (month == 12)
        printf("Days:31\n");
    else
        printf("Invalid Month\n");
    return 0;
}