#include <stdio.h>

int main()
{
    int month;
    printf("Enter month: ");
    scanf("%d", &month);

    switch (month) {
    case 1:
        printf("Days: 31\n");
        break;
    case 2:
        printf("Days:28\n");
        break;
    case 3:
        printf("Days:31\n");
        break;
    case 4:
        printf("Days:30\n");
        break;
    case 5:
        printf("Days:31\n");
        break;
    case 6:
        printf("Days:30\n");
        break;
    case 7:
        printf("Days:31\n");
        break;
    case 8:
        printf("Days:31\n");
        break;
    case 9:
        printf("Days:30\n");
        break;
    case 10:
        printf("Days:31\n");
        break;
    case 11:
        printf("Days:30\n");
        break;
    case 12:
        printf("Days:31\n");
        break;
    default:
        printf("Invalid Month\n");
    }
    return 0;
}