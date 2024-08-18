#include <stdio.h>

int mat[3][3];
int main()
{
    printf("Enter elements of Matrix (3X3):\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);

    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        int colSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += mat[i][j];
            colSum += mat[j][i];
        }
        printf("Sum of Row %d is: %d\n", i + 1, rowSum);
        printf("Sum of column %d is: %d\n\n", i + 1, colSum);
    }

    /*           OR

        for (int i = 0; i < 3; i++) {
            int rowSum = 0;
            for (int j = 0; j < 3; j++) {
                rowSum += mat[i][j];
            }
            printf("Sum of Row %d is: %d\n", i + 1, rowSum);
        }

        printf("\n");

        for (int j = 0; j < 3; j++) {
            int colSum = 0;
            for (int i = 0; i < 3; i++) {
                colSum += mat[i][j];
            }
            printf("Sum of column %d is: %d\n", j + 1, colSum);
        }

    */

    return 0;
}
