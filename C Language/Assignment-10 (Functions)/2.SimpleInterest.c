#include <stdio.h>

// TSRS
float simpleInterest(int p, int r, int t)
{
    return p * r * t / 100;
}
int main()
{
    int p, r, t;
    printf("Enter Principle, Rate, Time: ");
    scanf("%d%d%d", &p, &r, &t);

    float SI = simpleInterest(p, r, t);
    printf("Simple Interest is: %.2f\n", SI);
    return 0;
}