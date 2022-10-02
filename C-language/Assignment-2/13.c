#include <stdio.h>

int main()
{
    int x;
    printf("Enter a 3 digit number: ");
    scanf("%d", &x);

    // eg: 345
    // after rotating one position to right number becomes: 534

    int unitDigit = x % 10;
    int remNum = x / 10;
    int ans = unitDigit * 100 + remNum;

    if (unitDigit == 0)
        printf("After one position right rotation number is: 0%d\n", remNum);
    else
        printf("After one position right rotation number is: %d\n", ans);
    return 0;
}