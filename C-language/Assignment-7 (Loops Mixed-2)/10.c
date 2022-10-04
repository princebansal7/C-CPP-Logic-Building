
#include <stdio.h>

// Had to make 'function' power as in VSCode math.h pow() function linking couldn't happen

int powr(int ld, int n)
{
    int ans = 1;
    for (int i = 1; i <= n; i++) {
        ans = ans * ld;
    }
    return ans;
}

int main()
{
    for (int i = 1; i <= 1000; i++) {
        int temp = i;
        int digits = 0, sum = 0;
        while (temp) {
            digits++;
            temp /= 10;
        }
        temp = i;
        while (temp) {
            int last_digit = temp % 10;
            sum += powr(last_digit, digits);
            temp /= 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}