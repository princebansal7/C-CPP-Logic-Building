#include <stdio.h>
/*

12345
 1234
  123
   12
    1
*/

int main()
{
    int n;
    printf("Enter lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        int k = 1;
        for (int j = 1; j <= n; j++) {
            if (j >= i)
                printf("%d", k++);
            else
                printf(" ");
        }
        printf("\n");
    }

    /* Way-2
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (j >= i)
                    printf("%d", j - i + 1);
                else
                    printf(" ");
            }
            printf("\n");
        }
    */
    printf("\n");
    return 0;
}