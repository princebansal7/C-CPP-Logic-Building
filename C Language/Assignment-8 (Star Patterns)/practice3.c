#include <stdio.h>
/*
    *
   **
  ***
 ****
*****

*/

int main()
{
    int n;
    printf("Enter lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (j >= n + 1 - i)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}