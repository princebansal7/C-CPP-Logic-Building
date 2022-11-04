#include <stdio.h>

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    switch (n > 0 == 1) {
    case 1:
        n = -n;
        printf("Converted to -ve: %d\n", n);
        break;
    case 0:
        n = -n;
        printf("Converted to +ve: %d\n", n);
        break;
    }
    return 0;
}