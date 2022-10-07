#include <stdio.h>
/*

ABCDE
 ABCD
  ABC
   AB
    A
*/

int main()
{
    int n;
    printf("Enter lines: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char k = 'A';
        for (int j = 1; j <= n; j++) {
            if (j >= i)
                printf("%c", k++);
            else
                printf(" ");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}