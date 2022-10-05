#include <math.h>
#include <stdio.h>
int main()
{
    // Menu Driven Program
    int a, b, c;
    int choice;
    do {
        printf("\n1.Check Equilateral\n");
        printf("2.Check Isosceles\n");
        printf("3.Check Right-Angeled Triangle\n");
        printf("4.Exit\n\n");

        printf("Enter sides a, b & c: ");
        scanf("%d%d%d", &a, &b, &c);

        printf("Enter choice: ");
        scanf("%d", &choice);

        if (a + b > c && b + c > a && a + c > b) {

            switch (choice) {
            case 1:
                if (a == b && b == c)
                    printf("Yes Equilateral Triangle\n");
                else
                    printf("Not Equilateral Triangle\n");
                break;
            case 2:
                if (a == b || b == c || c == a)
                    printf("Yes Isosceles Triangle\n");
                else
                    printf("Not Isosceles Triangle\n");
                break;
            case 3:
                if ((c * c == (b * b) + (a * a)))
                    printf("Yes Right-Angled Triangle\n");
                else
                    printf("Not Right-Angled Triangle\n");
                break;
            case 4:
                printf("Exiting...\n\n");
                break;
            default:
                printf("Invalid choice\n\n");
            }
        } else {
            printf("Not valid sides\n");
        }
    } while (choice != 4);
    return 0;
}