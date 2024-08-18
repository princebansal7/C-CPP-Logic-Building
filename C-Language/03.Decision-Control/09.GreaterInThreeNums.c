#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Enter 3 number a, b & c: ");
    scanf("%d %d %d", &a, &b, &c);

    /* Less efficient logic

           if (a > b && a > c)
               printf("%d\n", a);
           else if (b > c)
               printf("%d\n", b);
           else
               printf("%d\n", c);
   */

    /* More Effiecient

        if (a > b)
            if (a > c)
                printf("%d\n", a);
            else
                printf("%d\n", c);
        else
            if (b > c)
                printf("%d\n", b);
            else
                printf("%d\n", c);

    */

    // Using Ternary

    int ans = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("%d\n", ans);

    return 0;
}