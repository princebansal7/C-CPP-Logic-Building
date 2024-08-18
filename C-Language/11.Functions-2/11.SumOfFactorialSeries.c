#include <stdio.h>

int fact(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++)
        ans *= i;

    return ans;
}

// 1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5

int SumOfSeries()
{
    int sum = 0;
    for (int i = 1; i <= 5; i++)
        sum += (fact(i) / i);
    return sum;
}

int main()
{
    printf("Sum of series:\n1!/1 + 2!/2 + 3!/3 + 4!/4 + 5!/5 = %d\n", SumOfSeries());

    return 0;
}