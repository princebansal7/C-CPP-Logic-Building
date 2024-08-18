#include <stdio.h>

int main()
{
    int x;
    printf("Enter a num: ");
    scanf("%d", &x);

    int val = x / 10;
    int ans = val * 10;
    printf("New Number is: %d\n", ans);
    return 0;
}