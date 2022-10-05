#include <stdio.h>
int main()
{
    // Menu Driven Program
    int a, b;
    int choice;
    do {
        printf("\n1.Addition\n");
        printf("2.Multiplication\n");
        printf("3.Subtraction\n");
        printf("4.Division\n");
        printf("5.Exit\n\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter 2 numbers: ");
            scanf("%d%d", &a, &b);
            printf("Addition is: %d\n\n", a + b);
            break;
        case 2:
            printf("Enter 2 numbers: ");
            scanf("%d%d", &a, &b);
            printf("Multiplication is: %d\n\n", a * b);
            break;
        case 3:
            printf("Enter 2 numbers: ");
            scanf("%d%d", &a, &b);
            printf("Subtraction is: %d\n\n", a - b);
            break;
        case 4:
            printf("Enter 2 numbers: ");
            scanf("%d%d", &a, &b);
            printf("Division is: %.2f\n\n", a / (double)b);
            break;
        case 5:
            printf("Exiting...\n\n");
            break;
        default:
            printf("Invalid choice\n\n");
        }
    } while (choice != 5);
    return 0;
}