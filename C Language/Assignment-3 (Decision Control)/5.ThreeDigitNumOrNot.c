#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 99 && x < 1000)
        printf("Yes, it's a 3 digit number\n");
    else
        printf("Not a 3 digit number\n");

    /*
        int cnt = 0;
        while (x) {
            if (cnt > 3) // saving iterations for large number entered
                break;
            cnt++;
            x /= 10;
        }
        if (cnt == 3)
            printf("Yes, it's a 3 digit number\n");
        else
            printf("Not a 3 digit number\n");
    */
    return 0;
}