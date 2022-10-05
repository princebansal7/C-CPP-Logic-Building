#include <stdio.h>

int main()
{
    int day;
    printf("Enter Day number of Week: ");
    scanf("%d", &day);

    switch (day) {
    case 1:
        printf("Bad Monday\n");
        break;
    case 2:
        printf("Okay Tuesday\n");
        break;
    case 3:
        printf("Hahh Wednesday\n");
        break;
    case 4:
        printf("Yeah ! Thursday\n");
        break;
    case 5:
        printf("It's Fridayyyy\n");
        break;
    case 6:
        printf("Weekend Baby, Saturdayyy\n");
        break;
    case 7:
        printf("La la Laa Sundayyyy\n");
        break;
    default:
        printf("Invalid Day\n");
    }
    return 0;
}