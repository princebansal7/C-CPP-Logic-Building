#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter Coefficeints a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);

    int D = (b * b) - (4 * a * c);

    if (D > 0)
        printf("Roots are Real and Distinct \n");
    else if (D == 0)
        printf("Both roots are Euqal \n");
    else
        printf("Roots are Imaginary \n");
    return 0;
}