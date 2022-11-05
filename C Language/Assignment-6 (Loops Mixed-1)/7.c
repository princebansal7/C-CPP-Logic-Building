#include <stdio.h>

int main()
{
    int n, cnt = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while (n) {
        n /= 10;
        cnt++;
    }
    printf("digits: %d\n", cnt);
    return 0;
}