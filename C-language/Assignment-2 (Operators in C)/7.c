#include <stdio.h>
int main()
{
    int cnt = 1, x;
    printf("Enter a Number: ");
    scanf("%d", &x);

    // Eg: 5  => 00101 (LSB 1 at position 1)
    // Eg: 16 => 10000 (LSB 1 at position 5)
    // Eg: 4  => 00100 (LSB 1 at position 3)

    while (x)
    {
        if (x & 1)
        {
            printf("position is: %d\n", cnt);
            break;
        }
        x = x >> 1;
        cnt++;
    }
    return 0;
}