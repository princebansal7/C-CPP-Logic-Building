#include <math.h>
#include <stdio.h>
int main()
{
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    switch (year % 100 == 0) { // condition true => 1, else 0
    case 1:
        switch (year % 400 == 0) {
        case 1:
            printf("%d is Leap year\n", year);
            break;
        case 0:
            printf("%d is not Leap year\n", year);
            break;
        }
        break;
    case 0:
        switch (year % 4 == 0) {
        case 1:
            printf("%d is Leap year\n", year);
            break;

        case 0:
            printf("%d is not Leap year\n", year);
            break;
        }
        break;
    }
    return 0;
}