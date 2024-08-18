#include <stdio.h>

int mat[3][3];
int main()
{
    printf("Enter elements of Matrix (3X3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    printf("Upper Triangular Matrix is:\n");

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i > j)
                mat[i][j] = 0;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    /* Direct Display

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (i < j || i == j)
                    printf("%d ", mat[i][j]);
                else
                    printf("  ");
            }
            printf("\n");
        }
    */
    return 0;
}
