#include <stdio.h>

int main()
{
    // Menu Driven Program
    int choice;

    printf("Enter Var: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
        printf("Good\n");
        break;
    case 2:
        printf("Better\n");
        break;
    case 3:
        printf("Best\n");
        break;
    default:
        printf("Invalid\n\n");
    }
    return 0;
}