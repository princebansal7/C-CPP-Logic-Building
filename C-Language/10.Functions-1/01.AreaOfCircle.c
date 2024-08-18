#include <stdio.h>

// TSRS
float areaCircle(int r)
{
    return 3.14 * r * r;
}
int main()
{
    int r;
    printf("Enter Radius: ");
    scanf("%d", &r);

    float area = areaCircle(r);
    printf("Area is: %.2f\n", area);
    return 0;
}