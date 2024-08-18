#include <stdio.h>

int main()
{
    int x, d;
    printf("Enter a Number and Unit digit: ");
    scanf("%d%d", &x, &d);

    int ans = x * 10 + d;
    printf("New Number after appending unit digit is: %d\n", ans);
    return 0;
}